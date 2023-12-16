#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};


void printlist(Node* head){
    Node* curr=head->next;
    if(head==nullptr){
        cout<<"-1"<<endl;
    }
    if(head->next==head){
        cout<<head->data<<" ";
    }
    else{
        cout<<head->data<<" ";
        while(head->data!=curr->data){
            cout<<curr->data<<" ";
            curr=curr->next;
        }
        cout<<endl;
    }
    
}


/*FUNCTION CALL TO INSERT ANY ELEMENT*/
Node *ins(Node* head , int x , int p , int i ){
    if(head==nullptr){
        Node* newnode = new Node{x,newnode};
        return newnode;
    }
    if(p==i){
        Node* newnode= new Node{x,nullptr};
        Node* curr=head;
        while(curr->next!=head){
            curr=curr->next;
        }
        newnode->next=head;
        curr->next=newnode;
        return newnode;
    }
    else{
        Node* curr=head;
        while(p-1!=i){
            curr=curr->next;
            i+=1;
        }
        Node* newnode= new Node{x,nullptr};
        newnode->next=curr->next;
        curr->next=newnode;
        return head;
    }
}

/*FUNCTION CALL TO DELETE ANY ELEMENT*/
Node *del(Node* head , int d , int j){
    if(d==j){
        Node* curr=head;
        while(curr->next!=head){
            curr=curr->next;
        }

        curr->next=head->next;
        delete head;
        return curr->next;
    }
    else{
        Node* curr=head;
        while(d-1!=j){
            curr=curr->next;
            j+=1;
        }
        curr->next=curr->next->next;
        delete curr->next;
        return head;
        

    }
}

void check(int n){
    Node* head=nullptr;
    Node* tail=nullptr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        Node* newnode=new Node{a,head};
        if(head==nullptr){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }

    cout<<"Original elements inserted by the user = ";
    printlist(head);


    /*INSERTING ANY ELEMENT*/
    int x,p,i=1;
    cout<<"ENTER THE ELEMENT WHICH U WANT TO INSERT IN THE CURRENT LINKED LIST = ";
    cin>>x;
    cout<<"ENTER THE POSITION OF THE ELEMENT AT WHICH U WANT TO INSERT IT = ";
    cin>>p;
    head = ins(head,x,p,i);
    cout<<"AFTER INSERTION MODIFIED LINKED LIST = ";
    cout<<"h="<<head->next->next->data<<endl;
    printlist(head);


    /*DELETE ANY ELEMENT*/
    int d,j=1;
    cout<<"ENTER THE LOCATION AT WHICH U WANT TO DELETE = ";
    cin>>d;
    head= del(head,d,j);
    cout<<"AFTER DELLETION = ";
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