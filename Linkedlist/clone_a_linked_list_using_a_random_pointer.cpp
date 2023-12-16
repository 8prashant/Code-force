#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* random;
};

void printList(Node* head)
{
    cout << head->data << "("
        << head->random->data << ")";
    head = head->next;
    while (head != NULL) {
        cout << " -> " << head->data << "("
            << head->random->data << ")";
        head = head->next;
    }
    cout << endl;
}

Node *cloneLinkedList(Node* head){
    Node* curr=head;
    if(head==NULL || head->next==NULL){
        return head;
    }
    else{
        /*CREATING NEW NODES WHICH WILL COPY THE DATAS OF THE ORIGINAL NODES*/
        while(curr!=NULL){
            Node* newnode= new  Node{curr->data , nullptr};
            newnode->next=curr->next;
            curr->next=newnode;
            curr=newnode->next;
        }
        curr=head;
        while(curr!=NULL){
            if(curr->next!=NULL){
                curr->next->random=curr->random->next;
            }
            curr=curr->next->next;
        }
        curr=head;
        Node* currhead=curr->next;
        Node* currtail=currhead;
        while(currtail->next!=NULL){
            curr->next=currtail->next;
            curr=currtail->next;
            currtail->next=currtail->next->next;
            currtail=currtail->next;
        }
        curr->next=NULL;
        currtail->next=NULL;
        return currhead;
    }
}

int main(){

    Node* head = new Node{1,nullptr};
    head->next = new Node{2,nullptr};
    head->next->next = new Node{3,nullptr};
    head->next->next->next = new Node{4,nullptr};
    head->next->next->next->next
        = new Node{5,nullptr};
    head->random = head->next->next;
    head->next->random = head;
    head->next->next->random
        = head->next->next->next->next;
    head->next->next->next->random
        = head->next->next;
    head->next->next->next->next->random
        = head->next;
     
    // Print the original list
    cout << "The original linked list:\n";
    printList(head);
     
    // Function call
    Node* sol = cloneLinkedList(head);
     
    cout << "The cloned linked list:\n";
    printList(sol);
     
    return 0;
}