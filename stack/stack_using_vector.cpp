#include<iostream>
#include<vector>
using namespace std;

class stack{
    private:
    vector<int> v;

    public:
    void push(int a){
        v.push_back(a);
    }

    int pop(){
        if(v.empty()){
            return -1;
        }
        else{
            int b=v.back();
            v.pop_back();
            return b;
        }
    }

    bool isempty(){
        return v.empty();
    }

    int size(){
        return v.size();
    }

    int top(){
        if(v.empty()){
            return -1;
        }
        else{
            return v.back();
        }
    }

};

int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    cout<<(s.isempty()? "yes":"no")<<endl;;
    cout<<"s="<<s.size()<<endl;
    cout<<"Top="<<s.top()<<endl;

    printlist();
    return 0;
}