#include<bits/stdc++.h>
using namespace std;

void check(string st1){
    int a=0,b=0;
    stack<int> s;
    for(int i=0;i<st1.size();i++){
        if(st1[i]>='0' && st1[i]<='9'){
            s.push(st1[i]-'0');
        }
        else{
            a=s.top();
            s.pop();
            b=s.top();
            s.pop();
            if(st1[i]=='+'){
                s.push(b+a);
            }
            else if(st1[i]=='-'){
                s.push(b-a);
            }
            else if(st1[i]=='*'){
                s.push(b*a);
            }
            else if(st1[i]=='/'){
                s.push(b/a);
            }
            /*
            switch (st1[i]) {
                case '+':
                    s.push(b + a);
                    break;
                case '-':
                    s.push(b - a);
                    break;
                case '*':
                    s.push(b * a);
                    break;
                case '/':
                    s.push(b / a);
                    break;
            }*/
        }
    }
    cout<<s.top()<<endl;
}

int main(){
    string st1="231*+9-"/*"12*3+"*/;
    check(st1);
    return 0;
}