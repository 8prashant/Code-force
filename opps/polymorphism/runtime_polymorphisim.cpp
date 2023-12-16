#include<bits/stdc++.h>
using namespace std;

class c1{
    public:
    void fun(){
        cout<<"class 1"<<endl;
    }
};

class c2: public c1{
    public:
    void fun(){
        cout<<"class 2"<<endl;
    }
};

class c3: public c1{
    public:
    void fun(){
        cout<<"class 3"<<endl;
    }
};

int main(){
    c2 x1;
    c3 x2;

    x1.fun();
    x2.fun();;

    return 0;
}