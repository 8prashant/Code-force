#include<bits/stdc++.h>
using namespace std;

vector<int> adj[10];
vector<int>vis(10,0);
void dfs(int n){
    vis[n]++;
    cout<<n<<" ";
    for(auto x:adj[n]){
        if(vis[x]==0){
            dfs(x);
        }
    }
}

int main(){
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
    int n;
    cin>>n;
    dfs(n);

    return 0;
}