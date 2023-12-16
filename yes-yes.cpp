#include <iostream>
#include <unordered_map>
using namespace std;

void check(string& st1) {
    int s=st1.size();
    unordered_map<char, int> m;
    if(st1.size()==1){
        if(st1[0]=='Y' || st1[0]=='e' || st1[0]=='s'){
            cout<<"YES"<<endl;
            return;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    if (st1.size()==2 ){
        if(st1[0]=='Y' && st1[1]=='e' || st1[0]=='e' && st1[1]=='s' || st1[0]=='s' && st1[1]=='Y'){
            cout<<"1="<<"YES"<<endl;
            return;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    for (int i=0;i<st1.size();i++) {
        m[st1[i]] = i;
        /*cout<<"m="<<m[st1[i]]<<endl;*/
        if (i>=2 && m['Y']+1!=m['e'] && m['e']+1!=m['s'] ||i>=3 &&  m['e']+1!=m['s'] && m['s']+1!=m['Y'] ||i>=3 &&  m['s']+1!=m['Y'] && m['Y']+1!=m['e']) {
            cout << "NO" << endl;
            return;
        }
    }
    cout <<"2="<< "YES" << endl;
    return;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string st1;
        cin >> st1;
        cout<<i<<" ";
        check(st1);
    }

    return 0;
}
