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

/*
Node *remove(Node* head){                  //Delete First the node from the linked liist
    Node* temp =  head->next;
    delete head;
    return temp;
}
*/

/*
Node *removetail(Node* head){
    Node* current=head;
    while(current->next->next!=nullptr){
        current=current->next;
    }
    delete(current->next);
    current->next=nullptr;
    return current;
}
*/

int search(Node* head , int x, int i){
    if(head==nullptr){
        return -1;
    }
    else{
        if(head->data==x){
            return i;
        }
        else{
            search(head->next,x,i+1);
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


    int x,i=1;
    cout<<"Enter the element which u want to search = ";
    cin>>x;
    cout<<"location of x is = "<<search(head,x,i)<<endl;

/*
    tail=removetail(head);
    cout<<"New tail="<<tail->data<<endl;
*/

/*
    head = remove(head);                             //Delete First the node from the linked liist
    cout<<"New head data="<<head->data<<endl;
*/
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