#include<bits/stdc++.h>
using namespace std

int main(){
    int t;
    string st1;
    for(int i=0=;i<t;i++){
        cin>>st1;
        int d=0,t=0,r=0,g=0;
        for(int i=0;i<n-1;i++){
            if(st1[i]==st1[i+1]){
                d+=1;
            }
            if(st1[i]==st1[i+1] && st1[i+1]==st1[i+2]){
                t+=1;
            }
        }
        r=(d-t*2);
    }
}