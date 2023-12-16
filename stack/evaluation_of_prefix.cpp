#include <bits/stdc++.h>
using namespace std; 

void check(string st1){
    stack<char> s;
    reverse(st1.begin(),st1.end());
    for(int i=0;i<st1.size();i++){
        if(st1[i]>='0' && st1[i]<='9'){
            s.push(st1[i]-'0');
        }
        else{
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            if(st1[i]=='+'){
                s.push(a+b);
            }
            else if(st1[i]=='-'){
                s.push(a-b);
            }
            else if(st1[i]=='*'){
                s.push(a*b);
            }
            else if(st1[i]=='/'){
                s.push(a/b);
            }
        }
    }
    int x=s.top();
    cout<<x<<endl;
}

int main() {
    string st1="+9*26";
    check(st1);
    
    return 0;
}