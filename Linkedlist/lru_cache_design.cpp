/*
10
Limit of the list:4
10 20 30 10 20 30 50 60 10 20
original lsit = 20 10 60 50
head=20 tail=50
*/
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};

void printlist(Node* head){
    Node* curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

void check(int n){
    Node* head=NULL;
    Node* tail=NULL;
    unordered_map<int , Node*> m;
    int l,sum=0;
    cout<<"Limit of the list:";
    cin>>l;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(sum<l){
            if(m.find(a)==m.end()){
                Node* newnode= new Node{a,head,NULL};
                sum+=1;
                if(head==NULL){
                    head=newnode;
                    tail=newnode;
                }
                else{
                    head->prev=newnode;
                    head=newnode;
                }
            }
            else{
                Node* curr=m[a];
                if(curr->prev==NULL || curr->next==NULL){
                    if(curr->next==NULL){
                        curr->prev->next=NULL;
                        curr->prev=NULL;
                        curr->next=head;
                        head->prev=curr;
                        head=curr;
                    }
                }
                else{
                    curr->prev->next=curr->next;
                    curr->next->prev=curr->prev;
                    curr->prev=NULL;
                    curr->next=head;
                    head=curr;
                }
            }
        }
        else{
            tail=tail->prev;
            delete tail->next;
            tail->next=NULL;
            Node* newnode = new Node{a,head,NULL};
            head->prev=newnode;
            head=newnode;
        }

    }
    cout<<"original lsit = ";
    printlist(head);
    cout<<"head="<<head->data<<" "<<"tail="<<tail->data<<endl;

    cout<<"m="<<m[10]<<endl;
}

int main(){
    int t;
    cin>>t;
    for(int  i=0;i<t;i++){
        int n;
        cin>>n;
        check(n);
    }
    return 0;
}