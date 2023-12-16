/****O(m+n) Timme Compelxity   and O(m) space Complexity
 class Solution {
public:
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		unordered_map<ListNode*, int> m;
		while(headA != NULL){
			m[headA]++;
			headA = headA -> next;
		}
		while(headB != NULL){
			if(m[headB] > 0){
				return headB;
			}
			headB = headB -> next;
		}
		return NULL;
	}
};
 ****/


/*O(m+n) Time complexity  O(1) space complxity*/
#include<bits/stdc++.h>
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

void point(Node* head1 , Node* head2){
    int c1=0,c2=0;
    Node* curr1=head1;
    Node* curr2=head2;
    while(curr1!=nullptr){
        curr1=curr1->next;
        c1+=1;
    }
    while(curr2!=nullptr){
        curr2=curr2->next;
        c2+=1;
    }
    int m=max(c1,c2);
    int mi=min(c1,c2);
    for(int i=0;i<(m-mi);i++){
        head1=head1->next;
    }
    while(head1!=nullptr){
        if(head1->data==head2->data){
            cout<<head1->data<<endl;
            return;
        }
        else{
            head1=head1->next;
            head2=head2->next;
        }
    }
    cout<<"No Intersection"<<endl;
    return;
}

void poi(Node* head1 , Node* head2){
    unordered_map<int, bool> m;
    Node* p=head1;
    while(p!=nullptr){
        m[p->data]=true;
        p=p->next;
    }
    p=head2;
    while(p!=nullptr){
        if(m[p->data]==true){
            cout<<p->data<<endl;
            return;
        }
        else{
            p=p->next;
        }
    }
    cout<<"No intersection point"<<endl;
    return;
}

void check(int t){
    Node* head1=nullptr;
    Node* head2=nullptr;
    Node* tail1=nullptr;
    Node* tail2=nullptr;
    int a,b;
    cout<<"A= ";
    cin>>a;
    for(int i=0;i<a;i++){
        int x;
        cin>>x;
        Node* newnode=new Node{x,nullptr};
        if(head1==nullptr){
            head1=newnode;
            tail1=newnode;
        }
        else{
            tail1->next=newnode;
            tail1=newnode;
        }
    }
    cout<<"B= ";
    cin>>b;
    for(int j=0;j<b;j++){
        int y;
        cin>>y;
        Node* n2node = new Node{y,nullptr};
        if(head2==nullptr){
            head2=n2node;
            tail2=n2node;
        }
        else{
            tail2->next=n2node;
            tail2=n2node;
        }
    }

    cout<<"1st list = ";
    printlist(head1);
    cout<<"2nd list = ";
    printlist(head2);

    cout<<"Point of intersection = ";
    point(head1,head2);

    cout<<"Point of intersection using O(m+n)";
    poi(head1 , head2);
    

}

int main(){
    int t;
    cin>>t;
    check(t);

    return 0;
}