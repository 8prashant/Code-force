#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    for(long long int i=0;i<t;i++){
        long long int a,sum=0,h3,h2,h1;
        cin>>a;
        for(long long int j=a;j>=1;j--){
            for(long long int k=j-1;k>=1;k--){
                for(long long int l=k-1;l>=1;l--){
                    if(j+k+l==a){
                        h3=j;
                        h2=k;
                        h1=l;
                    }
                }
            }
        }
        cout<<h2<<" "<<h3<<" "<<h1<<endl;
    }
    return 0;
}