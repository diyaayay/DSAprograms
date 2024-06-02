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

int main()
{

node *root=NULL;
buildTree(root);
levelOrderTraversal(root);

    return 0;
}
