#include<bits/stdc++.h>
using namespace std;

void bfs(int n, vector<int>adj[]){
    queue<int>q;
    vector<int> vis(n,0);
    q.push(1);
    vis[1]=1;
    while(!q.empty()){
        int s=q.size();
        for(int i=0;i<s;i++){
            int x=q.front();
            q.pop();
            cout<<x<<" ";
            for(auto m:adj[x]){
                if(vis[m]==0){
                    vis[m]++;
                    q.push(m);
                }
            }
        }
    }   
}

int main(){
    vector<int> adj[10];
    adj[1].push_back(2);
    adj[1].push_back(6);
    adj[2].push_back(1);
    adj[2].push_back(3);
    adj[2].push_back(4);
    adj[3].push_back(2);
    adj[4].push_back(2);
    adj[4].push_back(5);
    adj[5].push_back(4);
    adj[5].push_back(8);
    adj[6].push_back(1);
    adj[6].push_back(7);
    adj[6].push_back(9);
    adj[7].push_back(6);
    adj[7].push_back(8);
    adj[8].push_back(5);
    adj[8].push_back(7);
    adj[9].push_back(6);
    bfs(10,adj);

    return 0;
}