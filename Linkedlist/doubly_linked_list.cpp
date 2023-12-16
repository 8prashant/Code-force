#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
};

void printlist(Node* head){
    Node* curr=head;
    while(curr!=nullptr){
        cout<<"prev="<<curr->prev<<" ";
        cout<<"data="<<curr->data<<" ";
        cout<<"next="<<curr->next;
        cout<<endl;
        curr=curr->next;
    }
}

void check(int n){
    Node* head=nullptr;
    Node* tail=nullptr;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        Node* newnode= new Node{a,nullptr,nullptr};
        if(head==nullptr){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            newnode->prev=tail;
            tail=tail->next;
        }
    }

    printlist(head);
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        check(n);
    }
    return 0;
}