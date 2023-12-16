#include<bits/stdc++.h>
using namespace std;

 void check(int n){
    cout<<((n%2 == 1)? 0:int(pow(2, n/2)))<<endl;
 }

int main(){
    int n;
    cin>>n;
    check(n);

    return 0;
}