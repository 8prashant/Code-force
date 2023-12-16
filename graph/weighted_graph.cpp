#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>adj[n+1];
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    for(int i=0;i<n+1;i++){
        cout<<"i="<<i<<"---->( ";
        for(auto x:adj[i]){
            cout<<"{"<<x.first<<","<<x.second<<"}"<<" ";
        }
        cout<<")"<<endl;
    }
    return 0;
}