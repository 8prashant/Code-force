#include<bits/stdc++.h>
using namespace std;

void bfsr(vector<list<int>> &l , int r , vector<bool> &v){
    v[r]=true;
    cout<<r<<" ";
    for(int x:l[r]){
        if(!v[x]){
            bfsr(l,x,v);
        }
    }
}

void bfs(vector<list<int>>l , int r){
    vector<bool> v(l.size(),false);
    bfsr(l,r,v);

}
void check(int v){
    cout<<"NO. OF EDGES: ";
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