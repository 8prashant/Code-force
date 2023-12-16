#include<bits/stdc++.h>
using namespace std;

void check(int n){
    int k,d,w,sum=0;
    vector<int> st1;
    cin>>k>>d>>w;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        st1.push_back(a);
    }
    if(k>=n){
        cout<<"1"<<endl;
        return;
    }
    else{
        int f=0,p=k-1;
        while(p<=n-1){
            if(st1[p]-st1[f]<=d  || st1[p]-(st1[f]+w)<=d){
                sum+=1;
                cout<<"a"<<endl;
                if(n-(p+1)>=k){
                    f=p+1;
                    p=p+k;
                }
                else{
                    f=p+1;
                    p=n-1;
                }
                if(p=n-1){
                    p+=1;
                }
            }
            else{
                p-=1;
            }
            cout<<"f="<<f<<"p="<<p<<"sum="<<sum<<endl;

        }
    }
    cout<<sum<<endl;
    return;
}

int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        check(n);
    }
    return 0;
}