#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
};

void printlist(Node* head){
    Node* curr= head;
    while(curr->next!=head){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<curr->data<<endl;
}

void check(int n){
    Node* head=nullptr;
    Node* tail=nullptr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        
        if(head==nullptr){
            Node* newnode= new Node{a,nullptr,nullptr};
            head=newnode;
            tail=newnode;
        }
        else{
            Node* newnode= new  Node{a,tail,head};
            tail->next=newnode;
            tail=newnode;
        }
    }
    head->prev=tail;

    cout<<"ORIGINAL ELEMENTS ENTRED BY THE USER = ";
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