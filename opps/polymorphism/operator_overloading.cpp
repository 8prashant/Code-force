#include<bits/stdc++.h>
using namespace std;

class sam{
    public:
    int a;
    int b;

    void operator +(sam & para){
        int v1=this->a;
        int v2=para.a;
        cout<<"output="<<v2-v1<<endl;
    }

    void operator () () {
        cout<<"Ready to wprk="<<this->a<<endl;
    }
};

int main(){
    sam n1,n2;
    n1.a=4;
    n2.a=7;

    n1+n2;

    n1();

    return 0;
}