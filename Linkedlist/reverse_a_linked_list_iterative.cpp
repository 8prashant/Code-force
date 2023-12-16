#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void printlist(Node* head){
    Node* curr=head;
    while(curr!=nullptr){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

Node *rev(Node* head){
    Node* prev=nullptr;
    Node* curr=head;
    while(curr!=nullptr){
        Node* frw=curr->next;
        curr->next=prev;
        prev=curr;
        curr=frw;
    }
    return prev;
}

void check(int n){
    Node* head=nullptr;
    Node* tail=nullptr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        Node* newnode=new Node{a,nullptr};
        if(head==nullptr){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }

    cout<<"ORIGINAL ELEMENTS ENTRED BY THE USER = ";
    printlist(head);


    cout<<"AFTER REVERSING THIS ELEMENTS = ";
    head=rev(head);
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