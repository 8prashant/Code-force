#include<bits/stdc++.h>
using namespace std;

void check(int m){
    int n=0,p=0;
    vector<int> v;
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        v.push_back(a);
        if(a<0){
            n+=1;
        }
        else{
            p+=1;
        }
    }
    for(int j=1;j<=p;j++){
        cout<<j<<" ";
    }
    for(int k=1;k<=n;k++){
        cout<<p-k<<" ";
    }
    cout<<endl;
    if(m==1){
        cout<<"1"<<endl;
    }
    if(m==2){
        cout<<"1"<<" "<<"0"<<endl;
    }
    else{
        int d=m-(n*2);
        for(int l=1;l<=n*2;l++){
            if(l%2!=0){
                cout<<"1"<<" ";
            }
            if(l%2==0){
                cout<<"0"<<" ";
            }
        }
        if(d>0){
            for(int x=0;x<d;x++){
                cout<<x+1<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int t,a;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a;
        check(a);
    }
    return 0;
}