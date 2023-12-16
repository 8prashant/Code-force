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

Node *seg(Node* head){
    Node* curr=head;
    Node* eh=nullptr;
    Node* et=nullptr;
    Node* oh=nullptr;
    Node* ot=nullptr;
    while(curr!=nullptr){
        int x=curr->data;
        if(x%2==0){
            if(eh==nullptr){
                eh=curr;
                et=eh;
            }
            else{
                et->next=curr;
                et=et->next;
            }
        }
        else{
            if(oh==nullptr){
                oh=curr;
                ot=oh;
            }
            else{
                ot->next=curr;
                ot=ot->next;
            }
        }
        curr=curr->next;
    }
    if(eh==nullptr || oh==nullptr){  /*IF ALL ELEMENTS ARE EVEN OR ODD*/
        return head;
    }
    else{
        et->next=oh;
        ot->next=nullptr;
        return eh;
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




    cout<<"Segregate even odd nodes of linked list = ";
    head=seg(head);
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