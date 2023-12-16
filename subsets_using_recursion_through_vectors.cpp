#include<bits/stdc++.h>
using namespace std;

void rev(vector<int> v , vector<int> v2 , int i){
  if(i==v.size()){
    for(int i=0;i<v2.size();i++){
      cout<<v2[i]<<" ";

    }
    cout<<endl;
  }
  else{
    v2.push_back(v[i]);
    rev(v,v2,i+1);
    v2.pop_back();
    rev(v,v2,i+1);
  }
}

int main(){
  int t;
  cin>>t;
  vector<int> v;
  vector<int>  v2;
  for(int i=0;i<t;i++){
    int a;
    cin>>a;
    v.push_back(a);
  }
  rev(v,v2,0);
  return 0;
}