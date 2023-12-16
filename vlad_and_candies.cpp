#include<bits/stdc++.h>
using namespace std;

void check(int n){
    vector<int> v;
    int sum=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    if(n==1 && v[0]>1){
        cout<<"NO"<<endl;
        return;
    }
    else{
        while(v[n-1]!=0){
            sort(v.begin(),v.end());
            if(v[n-1]-v[n-2]>1){
                cout<<"No"<<endl;
                return;
            }
            else{
                if(v[n-1]-v[n-2]==1){
                    v[n-2]=0;
                    v[n-1]=1;
                }
                else{
                    v[n-1]=0;
                    v[n-2]=0;
                }
            }
        }
        cout<<"YES"<<endl;
        return;
        
    }

}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        check(n);
    }
    return 0;
}