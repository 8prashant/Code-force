#include <bits/stdc++.h>
using namespace std;

void check(int n){
    vector<int> v1;
    vector<int> v2;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v1.push_back(a);
    }
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        v2.push_back(b);
    }
    int i=0;
    int d=-1;
    stack<int> s;
    while(i<n){
        if(v2[i]>v1[i]){
            cout<<"NO"<<endl;
            return;
        }
        else if(v1[i]==0 && v2[i]!=0){
            cout<<"NO"<<endl;
            return;
        }
        else if(v2[i]==0){
            if(d<0){
                s.push(i);
                i++;
            }
            else{
                if(v1[i]<=d){
                    i++;
                }
                else{
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
        else{
            if(d<0){
                d=v1[i]-v2[i];
                i++;
            }
            else{
                if((v1[i]-v2[i])==d){
                    i++;
                }
                else{
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
    }
    if(d<0){
        cout<<"YES"<<endl;
        return;
    }
    while(!s.empty()){
        int j=s.top();
        s.pop();
        if(v1[j]>d){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return;
    
}

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        check(n);
    }

    return 0;
}