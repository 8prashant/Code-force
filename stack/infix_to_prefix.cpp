#include <bits/stdc++.h>
using namespace std;

int prev(char a ){
    if(a=='^'){
        return 4;
    }
    else if(a=='*' || a=='/'){
        return 3;
    }
    else if(a=='+' || a=='-'){
        return 2;
    }
    else{
        return -1;
    }
}

void check(string st1){
    stack<char> s;
    string d;
    reverse(st1.begin(),st1.end());
    for(int i=0;i<st1.size();i++){
        if(st1[i]>='a' && st1[i]<='z'){
            d+=st1[i];
        }
        else if(st1[i]==')'){
            s.push(st1[i]);
        }
        else if(st1[i]=='('){
            while(s.top()!=')'){
                d+=s.top();
                s.pop();
            }
            s.pop();
        }
        else{
            while(s.empty()==false && prev(st1[i])<prev(s.top())){
                d+=s.top();
                s.pop();
            }
            s.push(st1[i]);
        }
    }
    while(!s.empty()){
        d+=s.top();
        s.pop();
    }
    reverse(d.begin(),d.end());
    cout<<d<<endl;
}

int main() {
    string st1="x+y*z/w+u";
    check(st1);
    
    return 0;
}