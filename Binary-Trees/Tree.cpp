#include<iostream>
using  namespace std;
#include <queue>

#include <stdio.h>

class node{
    public:
    int data;
    node *left;
    node *right;
    
    node (int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

node *buildTree(node *&root){
    cout <<"\n Enter data:";
    int data;
    cin>>data;
    root = new node(data);
    if(data== -1){
        return NULL;
    }
    cout<<"\n Build tree for left:"<<data;
    root->left=buildTree(root->left);
    cout<< "\n Build Tree for right:"<<data;
    root->right=buildTree(root->right);
    return root;
    
}

void levelOrderTraversal(node *root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        node *temp = q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
        cout<<temp->data<<" ";
        if(temp ->left){
            q.push(temp->left);
        }
        
        if(temp->right){
            q.push(temp->right);
        }
        }
    }
}

void inorder(node *root){
    if(root==NULL)
    return ;
    
    inorder(root->left);
    cout <<root->data <<" ";
    inorder(root->right);
}

void postorder(node *root){
    if(root==NULL)
    return;
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void preorder(node *root){
    if(root==NULL)
    return;
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{

node *root=NULL;
buildTree(root);
levelOrderTraversal(root);
inorder(root);
cout<<"\n";
postorder(root);
cout<<"\n";
preorder(root);

    return 0;
}
