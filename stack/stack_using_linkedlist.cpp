#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

class stack{
    public:
    Node* head=NULL;
    void push(int a){
        Node* newnode= new Node{a,NULL};
        if(head==NULL){
            head=newnode;
        }
        else{
            newnode->next=head;
            head=newnode;
        }
    }
    int pop(){
        if(head==NULL){
            return -1;
        }
        else{
            int da=head->data;
            Node* curr=head;
            head=head->next;
            delete curr;
            return da;
        }
    }

    int size(){
        if(head==NULL){
            return 0;
        }
        else{
            int cou=0;
            Node* curr=head;
            while(curr!=NULL){
                cou++;
                curr=curr->next;
            }
            return cou;
        }
    }

    bool isempty(){
        return head==NULL;
    }

    int peek(){
        return head->data;
    }

};
int main(){
    stack s;
    s.push(10);
    s.push(50);
    s.push(20);
    s.push(30);
    s.pop();
    cout<<"Is stack empty? : "<<(s.isempty()? "yes":"no")<<endl;
    cout<<"size? : "<<(s.size())<<endl;
    cout<<"Top element is : "<<s.peek()<<endl;


    return 0;
}