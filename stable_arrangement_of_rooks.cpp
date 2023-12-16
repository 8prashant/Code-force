#include <bits/stdc++.h>
using namespace std;

void  check(int n , int a){
    int x;
    if(n%2==0){
        x=n/2;
    }
    else{
        x=n/2+1;
    }
    if(a>x){
        cout<<"-1"<<endl;
        return;
    }
    vector<vector<char>>v(n,vector<char>(n,'.'));
    int i=0;
    int j=1;
    while(j<=a){
        v[i][i]='R';
        j++;
        i+=2;
    }
    for(int k=0;k<n;k++){
        for(int l=0;l<n;l++){
            cout<<v[k][l];
        }
        cout<<endl;
    }
}


int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;
        check(a,b);
    }

    return 0;
}