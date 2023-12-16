#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node* prev;
  Node* next;
};

/*FUNCTION TO PRINT THE ENTIRE LINKED LIST*/
void printlist(Node* head){
  while(head!=nullptr){
    cout<<head->data<<" ";
    head=head->next;
  }
  cout<<endl;
}

/*FUNCTION TO FIND THE MIDDLE OF THE LINKED LIST*/

/*in nive appproch we can travers the linked list twise . first to find the linked list size then divide that size to find the middle of the 
linked list . Then once again traverse that linked list for second time tile that half of the size and print the data of that middle element 
e.g if size is 5 then middle integer will be 2 so prin the data of 2nd elemet in the list*/

void mid(Node* head){
    Node* slow= head;
    Node* fast= head;
    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
        i+=1;
    }
    cout<<slow->data<<endl;
}


void check(int n){
  Node* head = nullptr;
  Node* tail = nullptr;
  for(int i=0;i<n;i++){
    int a;
    cin>>a;
    Node* newnode= new Node{a,tail,nullptr};
    if(head==nullptr){
      head=newnode;
      tail=newnode;
    }
    else{
      tail->next=newnode;
      tail=newnode;
    }
  }
 /*CALLING FUNCTIION TO PRINT THE ORIGINAL LINKEDLIST INSERTED BY THE USER*/
  cout<<"original linked list = ";
  printlist(head);


 cout<<"MIDDLE ELEMENT = ";
 mid(head);


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