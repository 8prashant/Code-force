#include<bits/stdc++.h>
using namespace std;

void bfs(vector<list<int>>l , int root){
    queue<int> q;
    vector<bool> vist(l.size(),false);
    q.push(root);
    vist[root]=true;
    while(!q.empty()){
        int a=q.front();
        q.pop();
        cout<<a<<" ";
        for(int x:l[a]){
            if(!vist[x]){
                q.push(x);
                vist[x];
            }
        }
    }
    cout<<endl;
}
void check(int v){
    cout<<"NO> OF EDGES: ";
    int e;
    cin>>e;
    vector<list<int>> l(v);
    for(int i=0;i<e;i++){
        int v1,v2;
        cout<<"v1= ";
        cin>>v1;
        cout<<"V2= ";
        cin>>v2;
        l[v1].push_back(v2);
    }

    bfs(l,0);

}

int main(){
    int v;
    cin>>v;
    check(v);
    return 0;
}