#include<iostream>
using namespace std;

class stack{
    public:
    int *arr,top1,top2,cap;
    stack(int n){
        cap=n;
        top1=-1;
        top2=cap;
        arr= new int[cap];
    }

    void push1(int a){
        if(top1<top2-1){
            top1++;
            arr[top1]=a;
        }
    }

    void push2(int a){
        if(top1<top2-1){
            top2--;
            arr[top2]=a;
        }
    }

    int pop1(){
        if(top1>=0){
            int x=arr[top1];
            top1--;
            return x;
        }
        else{
            exit(1);
        }
    }

    int pop2(){
        if(top2<cap){
            int x=arr[top2];
            top2++;
            return x;
        }

        else{
            exit(1);
        }
    }

    void print1(){
        int t=top1;
        while(t>=0){
            cout<<arr[t]<<" ";
            t--;
        }
        cout<<endl;
    }

    void print2(){
        int r=top2;
        while(r<cap){
            cout<<arr[r]<<" ";
            r++;
        }
        cout<<endl;
    }
};

int main(){
    stack stack(5);
    stack.push1(10);
    stack.push2(20);
    stack.push1(30);

    cout<<"1st = ";stack.print1();
    cout<<"2nd = ";stack.print2();
    return 0;
}

