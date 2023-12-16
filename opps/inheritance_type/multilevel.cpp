#include<bits/stdc++.h>
using namespace std;

class org{
    public:
    int dob;
    int ol;
};

class human:public org{
    public:
    int height;
    int weight;
};

class male:public human{
    public:
    int size;
};

int main(){
    male rahul;
    cout<<rahul.dob<<endl;
    return 0;
}