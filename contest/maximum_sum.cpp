#include<bits/stdc++.h>
using namespace std;
/*
void check(long long int n , long long int c){
    vector<long long int> v;
    for(long long int i=0;i<n;i++){
        long long int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    long long int head=0,tail=n-1;
    long long int j=0;
    while(j<c){
        if(v[head]+v[head+1]<=v[tail]){
            head+=2;
        }
        else{
            tail-=1;
        }
        j++;
    }
    long long int sum=0;
    for(long long int i=head;i<=tail;i++){
        sum+=v[i];
    }
    cout<<sum<<endl;
}*/

long long int ma(vector<long long int> v ,long long int head , long long int tail , long long int c){
    if(c==0){
        int sum=0;
        for(long long int i=head;i<=tail;i++){
            sum+=v[i];
        }
        return sum;
    }
    long long int res1=ma(v,head+2,tail,c-1);
    long long int res2=ma(v,head,tail-1,c-1);
    return max(res1,res2);
}

void check(long long int n , long long int c){
    vector<long long int> v;
    for(long long int i=0;i<n;i++){
        long long int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    cout<<ma(v,0,n-1,c)<<endl;
}


int main(){
    long long int t;
    cin>>t;
    for(long long int i=0;i<t;i++){
        long long int n,c;
        cin>>n>>c;
        check(n,c);
    
    }
    return 0;
}