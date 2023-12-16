#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void printlist(Node* head){
    Node* curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

Node *swa(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    else{
        Node* curr=head->next->next;
        Node* prev=head;
        head=head->next;
        head->next=prev;
        while(curr!=NULL && curr->next!=NULL){
            prev->next=curr->next;
            prev=curr;
            Node* p=curr->next->next;
            curr->next->next=curr;
            curr=p;
        }
        prev->next=curr;
        return head;
    }
}

void check(int n){
    Node* head=nullptr;
    Node* tail=nullptr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        Node* newnode= new Node{a,nullptr};
        if(head==nullptr){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    cout<<"Original string = ";
    printlist(head);

    cout<<"After Pair wise swap = ";
    head=swa(head);
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