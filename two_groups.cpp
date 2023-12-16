#include <bits/stdc++.h>
#define ll long long
using namespace std;

void check(ll int n){
    ll int a=0,b=0;
    for(ll int i=0;i<n;i++){
        ll int x;
        cin>>x;
        if(x<0){
            a+=abs(x);
        }
        else{
            b+=x;
        }
    }
    cout<<abs(a-b)<<endl;
    return;
}

int main() {
    ll int t;;
    cin>>t;
    for(ll int i=0;i<t;i++){
        ll int n;
        cin>>n;
        check(n);
    }

    return 0;
}