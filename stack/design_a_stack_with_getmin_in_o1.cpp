#include<bits/stdc++.h>
using namespace std;

class stackclass{
    public:
    stack<int> s;
    int min;

    void peek(){
        if(s.empty()){
            cout<<"Peek:"<<"Empty"<<endl;
        }
        else if(s.top()<min){
            cout<<"Peek:"<<min<<endl;
        }
        else{
            cout<<"Peek:"<<s.top()<<endl;
        }
    }
    
    void push(int x){
        if(s.empty()){
            s.push(x);
            min=x;
        }
        else if(x<min){
            s.push(2*x-min);
            min=x;
        }
        else{
            s.push(x);
        }
    }
    
    void pop(){
        if(s.empty()){
            cout<<"Stack is Empty."<<endl;
        }
        else{
            int t=s.top();
            if(t<=min){
                s.pop();
                min=2*min-t;
            }
            else{
                s.pop();
            }
        }
    }

    void getmin(){
        cout<<"minimum element : "<<min<<endl;
    }
};

int main(){
    stackclass s;
    s.push(10);
    s.push(20);
    s.getmin();
    s.peek();
    s.push(2);
    s.push(5);
    s.pop();
    s.push(1);
    s.getmin();
    s.peek();

    return 0;
}