#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
};

Node *createnode(int a){
    Node* newnode=new Node{a,NULL,NULL};
    return newnode;
}

void insertnode(Node* root , int a){
    if(root->data>a){
        if(root->left==NULL){
            root->left=createnode(a);
        }
        else{
            insertnode(root->left,a);
        }
    }
    else{
        if(root->right==NULL){
            root->right=createnode(a);
        }
        else{
            insertnode(root->right,a);
        }
    }
}

void inOrder(Node* root) {
    if (root == NULL) {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    else{
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(Node* root){
    if(root==NULL){
        return;
    }
    else{
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }
}

void check(int n){
    Node* root=NULL;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(root==NULL){
            root=createnode(a);
        }
        else{
            insertnode(root,a);
        }
    }

    cout << "In-order traversal of tree: ";
    inOrder(root);
    cout<<endl;

    cout << "Pre-order traversal of tree: ";
    preOrder(root);
    cout<<endl;

    cout << "Post-order traversal of tree: ";
    postOrder(root);
    cout<<endl;   
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