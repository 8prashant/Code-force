#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<n+1;i++){
        cout<<"i="<<i<<"----->";/*
        for(auto x:adj[i]){
            cout<<x<<" ";
        }*/
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*
i/p
5 6
2 1
1 3
2 5
3 4
4 5
2 4

o/p
i=0----->
i=1----->2 3
i=2----->1 5 4
i=3----->1 4
i=4----->3 5 2
i=5----->2 4
*/