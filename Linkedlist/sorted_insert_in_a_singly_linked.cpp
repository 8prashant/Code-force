#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void printlist(Node* head){
    if(head==nullptr){
        return;
    }
    else{
        cout<<head->data<<" ";
        printlist(head->next);
    }
}

Node *ins(Node* head , int x){
    Node* curr=head;
    Node* newnode=new Node{x,nullptr};
    if(head->data>x){
        newnode->next=head;
        return newnode;
    }
    else{
        while(curr->next!=nullptr){
            if(x>=curr->data && x<curr->next->data){
                newnode->next=curr->next;
                curr->next=newnode;
                return head;
            }
            curr=curr->next;
        }
        if(curr->data<=x){
            curr->next=newnode;
            return head;
        }

    }
}


void check(int n){
    Node* head=nullptr;
    Node* tail=nullptr;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        Node*  newnode= new Node{a,nullptr};
        if(head==nullptr){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }

    printlist(head);
    cout<<endl;

    cout<<"ENTER THE ELEMENT WHICH U WANT TO INSERT = ";
    int x;
    cin>>x;
    head=ins(head,x);
    cout<<"AFTER INSERTION = ";
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