#include<bits/stdc++.h>
using namespace std;

bool ans=false;
void check(int n , vector<int> adj[],vector<int> &vis,int x,int t){
    if(ans==true){
        return;
    }
    if(vis[x]!=0 && t==3){
        ans=true;
        return;
    }
    vis[x]=1;
    for(auto m:adj[x]){
        check(n,adj,vis,m,t+1);
    }
    //vis[x]=0;
}

int main(){
    int n;
    cin>>n;
    vector<int>adj[n+1];
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        adj[i].push_back(a);
    }
    for(int i=1;i<=n;i++){
        vector<int> vis(n+1,0);
        if(ans!=true){
            check(n+1,adj,vis,i,0);
        }
    }
    if(ans==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}