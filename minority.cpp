#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string st1;
        int z=0,o=0;
        cin>>st1;
        for(int i=0;i<st1.size();i++){
            if(st1[i]=='0'){
                z+=1;
            }
            else{
                o+=1;
            }
        }
        if(z==o){
            cout<<z-1<<endl;
        }
        else{
            cout<<min(z,o)<<endl;
        }
    }
    return 0;
}