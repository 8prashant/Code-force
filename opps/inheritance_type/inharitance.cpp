#include<bits/stdc++.h>
using namespace std;

class humans{
    protected:
    //public:
    int height;
    int weight;
    string color;

};

class male:public humans{
    public:
    int size;

    int get(){
        return this->height;
    }
};
class female:public humans{
    public:
    int depth;

    int get(){
        return this->height;
    }
};

int main(){
    male pr;
    //cout<<pr.height<<endl;
    cout<<pr.get()<<endl;/*
    cout<<pr.height<<endl;*/ /*with protected we can access the data only for child but not outside the class*/

    return 0;
}