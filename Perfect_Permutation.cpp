#include<bits/stdc++.h>
using namespace std;

int main(){
    int a ;
    cin>>a;
    long long int arr[100000]={};
    /*for(int j=0;j<100000;j++){
        arr[j]=j+1;
    }*/
    for(int i=0;i<a;i++){
        int b;
        cin>>b;
        for(int k=0;k<b;k++){
            cout<<k+1<<" ";
        }
        cout<<endl;
    }

    return 0;
}