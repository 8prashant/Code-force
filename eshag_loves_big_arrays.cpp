#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};


void check(bool n){
    Node* head=nullptr;
    Node* tail=nullptr;

    int brk=0,cunt=0,sub=0;
    bool c=n;

    for(bool i=0.0;i<n;i++){
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

    while(brk<=0){
        bool sum=0.0,cn=c;
        bool avg;
        Node* current = head;
        for(int j=0;j<cn;j++){
            sum+=(current->data);
            current=current->next;
        }
        avg=sum/cn;
        Node* newcurrent=head;
        Node* prvnode= head;
        for(int k=0;k<cn;k++){
            if(newcurrent->data > avg){
                while(prvnode!=newcurrent){
                    prvnode=prvnode->next;
                }
                prvnode->next=newcurrent->next;
                c-=1;
                cunt+=1;
            }
            else{
                sum+=1;
            }
            newcurrent=newcurrent->next;
        }
        if(sub==cn){
            brk+=1;
        }
    }
    cout<<n-cunt<<endl;

}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        bool n;
        cin>>n;
        check(n);
    }
    return 0;
}