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

void recheck(Node* head){
    Node* back=NULL;
    Node* slow=head;
    Node* fast= head;
    Node* prev=NULL;
    Node* curr=NULL;
    if(head==NULL || head->next==NULL){
        cout<<"YES"<<endl;
    }
    else{
        while(fast!=NULL && fast->next!=NULL){
            back=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast!=NULL){
            curr=slow->next;
        }
        else{
            curr=slow;
        }
        while(curr!=NULL){
            Node* frw=curr->next;
            curr->next=prev;
            prev=curr;
            curr=frw;
        }
        Node* curr1=head;
        Node* curr2=prev;

        while(curr2!=NULL){
            if(curr1->data!=curr2->data){
                cout<<"NO"<<endl;
                return;
            }
            else{
                curr1=curr1->next;
                curr2=curr2->next;
            }
        }
        cout<<"YES"<<endl;
        return;


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

    recheck(head);


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