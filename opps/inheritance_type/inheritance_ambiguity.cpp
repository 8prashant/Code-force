#include<bits/stdc++.h>
using namespace std;

class a{
    public:
    int d1;
};

class b{
    public:
    int d1;
};

class c: public a , public b{
};

int main(){
    c x;
    cout<<x.a::d1<<endl;
    return 0;
}