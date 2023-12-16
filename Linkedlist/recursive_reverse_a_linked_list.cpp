#include<iostream>
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

Node *rev(Node* curr , Node* prev){
    if(curr==nullptr){
        return prev;
    }
    else{
        Node* frw=curr->next;
        curr->next=prev;
        rev(frw,curr);
    }
}


void check(int n){
    Node* head=nullptr;
    Node* tail=nullptr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        Node* newnode = new Node{a,nullptr};
        if(head==nullptr){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }

    cout<<"original linkedlist"<<endl;
    printlist(head);

    Node* prev=nullptr;
    head=rev(head,prev);
    cout<<"reverse linkedlist"<<endl;
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
    
}