#include<bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode* next;
};

void printlist(ListNode* head){
    ListNode* curr=head;
    while(curr!=NULL){
        cout<<curr->val<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

ListNode* sor(ListNode* list1 , ListNode* list2){
    ListNode* head=NULL ;
    ListNode* tail=NULL ;
    ListNode* a=NULL ;
    ListNode* b=NULL;
    if(list1==NULL){
        return list2;
    }
    if(list2==NULL){
        return list1;
    }
    else{
        if(list2->val<=list1->val){
            head=list2;
            tail=list2;
            a=list2->next;
            b=list1;
        }
        if(list1->val<list2->val){
            head=list1;
            tail=list1;
            a=list1->next;
            b=list2;
        }

        while(a!=NULL && b!=NULL){
            if(b->val<a->val){
                tail->next=b;
                tail=b;
                b=b->next;
            }
            else{
                tail->next=a;
                tail=a;
                a=a->next;
            }
        }
        if(a==NULL){
            tail->next=b;
        }
        else{
            tail->next=a;
        }

        return head;
    }
}

void check(int n , int m){
    ListNode* list1=NULL;
    ListNode* list2=NULL;
    ListNode* tail1=NULL;
    ListNode* tail2=NULL;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        ListNode* newListNode = new ListNode{a,NULL};
        if(list1==NULL){
            list1=newListNode;
            tail1=newListNode;
        }
        else{
            tail1->next=newListNode;
            tail1=newListNode;
        }
    }
    for(int j=0;j<m;j++){
        int b;
        cin>>b;
        ListNode* newListNode = new ListNode{b,NULL};
        if(list2==NULL){
            list2=newListNode;
            tail2=newListNode;
        }
        else{
            tail2->next=newListNode;
            tail2=newListNode;
        }
    }

    cout<<"1st list = ";
    printlist(list1);

    cout<<"2nd list = ";
    printlist(list2);


    cout<<"After sorting = ";
    printlist(sor(list1,list2));

}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m;
        cin>>n>>m;
        check(n,m);
    }
    return 0;
}