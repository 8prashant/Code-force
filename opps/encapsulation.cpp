//Encapsulation is defined as wrapping up data and information under a single unit.
#include<bits/stdc++.h>
using namespace std;

class Node{
    
    private://by putting data in private we have limited the access of datas to the functions which give biggest adv to oops compare to pops 
    int data;
    Node* next;

    public:
    void set(int data,Node* newnode){//by removing setter from the program we can make it more secure as the program will be readonly than. 
        this->data=data;
        this->next=newnode;
    }
    int get(){
        return this->data;
    }
};

int main(){
    Node n;
    n.set(5,NULL);
    cout<<"head="<<n.get()<<endl;;
    return 0;
}