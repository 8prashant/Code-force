#include<bits/stdc++.h>
using namespace std;

int prev(char c){
    if(c=='^'){
        return 3;
    }
    else if (c=='*' || c=='/'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else{
        return 0;
    }
}

void check(string st1){
    string d;
    stack<char> s;
    for(int i=0;i<st1.size();i++){
        char a=st1[i];
        if(st1[i]>='a' && st1[i]<='z' || st1[i]>='0' && st1[i]<='9' || st1[i]>='A' && st1[i]<='Z'){
            d+=a;
        }
        else if(st1[i]=='('){
            s.push(st1[i]);/*
            cout<<"s="<<s.top()<<endl;*/
        }
        else if(st1[i]==')'){
            while(s.top()!='('){
                d+=s.top();
                s.pop();
            }
            s.pop();
        }
        else{
            while(s.empty()==false && prev(st1[i])<=prev(s.top())  ){
                d+=s.top();
                s.pop();
            }
            s.push(st1[i]);/*
            cout<<"d="<<d<<endl;
            cout<<"s="<<s.top()<<endl;*/
        }
        
    }
    while (s.empty()==false)
    {
        d+=s.top();;
        s.pop();
    }
    cout<<d<<endl;
}

int main(){
    string st=/*"a+b*c"*/"a+b*(c^d-e)^(f+g*h)-i";
    check(st);
    return 0;
}