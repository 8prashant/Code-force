#include<iostream>
using namespace std;

class stack{
    private:
    int top;
    int* arr;
    int capacity;

    public:
    stack(int cap){
        top=-1;
        capacity=cap;
        arr= new int[capacity];
    }

    void push(int value){
        if(top==capacity-1){
            cout<<"OVER FLOW "<<endl;
            return;
        }
        else{
            top+=1;
            arr[top]=value;
        }
    }
    int pop(){
        if(top==-1){
            cout<<"EMPTY "<<endl;
        }
        else{
            int del=arr[top];
            top-=1;
            return del;
        }
    }

    int peek(){
        if(top=-1){
            cout<<"stack is empty "<<endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }

    bool isempty(){
        return (top==-1);
    }

    bool isfull(){
        return (capacity-1==top);
    }
};

int main(){

  stack stack(3); // create an instance of Stack class with capacity 3
  stack.push(5);
  stack.push(10);
  stack.push(15);
    cout<< (stack.isempty() ? "yes" : "no" )<<endl;
    return 0;
}