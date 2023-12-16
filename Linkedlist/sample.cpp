#include<bits/stdc++.h>
using namespace std;

class Node{
public:
int data;
Node* next;
};

void print(Node* head){
  Node* current=head;
  while(current!=nullptr){
    cout<<current->data<<" ";
    current=current->next;
  }
  cout<<endl;
}

void delet(Node* head){
  Node* current;

}

int main(){
  int t;
  cin>>t;
  Node* head=nullptr;
  Node* tail=nullptr;

  for(int i=0;i<t;i++){
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

  cout<<"original elements"<<endl;
  print(head);

  int d;
  cout<<"after which position u want to insert new node"<<endl;
  cin>>d;
  int in;
  cin>>in;

  Node* current=head;
  for(int i=0;i<d-1;i++){
    current=current->next;
  }

  Node* innode = new Node{in,current->next};
  current->next=innode;
  current=innode;



  cout<<"after deletion"<<endl;
  print(head);

  return 0;
}