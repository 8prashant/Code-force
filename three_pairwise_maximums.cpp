#include<bits/stdc++.h>
using namespace std;

void check(long long int x,long long int y,long long int z){
    for(int a=1;a<=1000000000;a++){
            for(int b=1;b<=1000000000;b++){
                for(int c=1;c<=1000000000;c++){
                    int m=max(a,b);
                    int n=max(a,c);
                    int o=max(b,c);
                    if(x==m && y==n && z==o){
                        cout<<"YES"<<endl;
                        cout<<a<<" "<<b<<" "<<c<<endl;
                        return;
                    }
                    
                }
                
            }
    }
    cout<<"NO"<<endl;
    return;
    
}

int main(){
    long long int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long int x,y,z;
        cin>>x>>y>>z;
        check(x,y,z);
        
    }

    return 0;
}