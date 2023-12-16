#include<iostream>
#include<stack>
using namespace std;

bool matching(char open , char close){
    return (open=='(' && close==')'  || open=='{' && close=='}'  || open=='[' && close==']');
}

void check(string st1){
    stack<int> s;
    for(int i=0;i<st1.size();i++){
        if(st1[i]=='(' || st1[i]=='{' || st1[i]=='['){
            s.push(st1[i]);
        }
        else{
            if(s.empty()){
                cout<<"false"<<endl;
                return;
            }
            if(matching(s.top(),(st1[i]))==false){
                cout<<"false"<<endl;
                return;
            }
            else{
                s.pop();
            }
        }

    }
    if(s.empty()){
        cout<<"true"<<endl;
    }
}

int main(){
    string st1;
    cin>>st1;
    check(st1);
    return 0;
}