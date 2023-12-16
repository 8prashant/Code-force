#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> sr;
    set<int> sc;
    int r,c;
    cin>>r>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            char a;
            cin>>a;
            if(a=='S'){
                sr.insert(i);
                sc.insert(j);
            }
        }
    }
    cout<<r*c-(sr.size()*sc.size())<<endl;

    return 0;
}