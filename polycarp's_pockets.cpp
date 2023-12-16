#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    unordered_map<int,int> m;
    int ma=-1;
    for(int i=0;i<t;i++){
        int a;
        cin>>a;
        m[a]++;
    }
    for(auto x:m){
        ma=max(ma,x.second);
    }
    cout<<ma<<endl;
    

    return 0;
}