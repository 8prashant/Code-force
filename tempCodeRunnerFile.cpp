#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    unordered_map<int,int> m;
    int sum=0;
    int r,c;
    cin>>r>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            char a;
            cin>>a;
            if(a=='S' && v.size()==0){
                sum++;
                v.push_back((i+1)*10+(j+1));
                for(int k=1;k<=c;k++){
                    m[(i+1)*10+(k)]=1;
                }
                for(int l=1;l<=r;l++){
                    m[l*10+(j+1)]=1;
                }
                
            }
            else if(a=='S' && v.size()!=0){
                sum++;
                v.push_back((i+1)*10+(j+1));
                for(int k=1;k<=c;k++){
                    if(m[(i+1)*10+(k)]>0){
                        v.push_back(m[(i+1)*10+(k)]);
                    }
                    else{
                        m[(i+1)*10+(k)]=1;
                    }
                }
                for(int l=1;l<=r;l++){
                    if(m[l*10+(j+1)]>0){
                        v.push_back(m[l*10+(j+1)]);
                    }
                    else{
                        m[l*10+(j+1)]=1;
                    }
                }
            }
        }
    }
    cout<<r*c-(v.size()-(sum-1))<<endl;

    return 0;
}