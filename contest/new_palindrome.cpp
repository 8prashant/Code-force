#include<bits/stdc++.h>
using namespace std;

bool check(string st1){
    int i=0,j=st1.size()-1;
    while(i<=j){
        if(st1[i]==st1[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

void ch(string st1){
    unordered_map<char , int> m;
    set<char> s;
    for(int j=0;j<st1.size();j++){
        if(m.find(st1[j])==m.end()){
            m[st1[j]]=1;
        }
        else if(m[st1[j]]>0){
            m[st1[j]]+=1;
        }
        if(m[st1[j]]>=2){
            s.insert(st1[j]);
        }
    }
        if(check(st1) && s.size()>=2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
}

int main(){
    int t;
    cin>>t;
    string st1;
    set<char> s;
    for(int i=0;i<t;i++){
        cin>>st1;
        ch(st1);

    }
    return 0;
}