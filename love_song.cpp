#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    string st1;
    cin>>st1;
    for(int i=0;i<t;i++){
        int sum=0;
        int x,y;
        cin>>x>>y;
        for(int j=x-1;j<=y-1;j++){
            sum+=(st1[j]-'a')+1;
        }
        cout<<sum<<endl;
    }

    return 0;
}