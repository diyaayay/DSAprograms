/* A binary tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height (Node *root){
        if(root==NULL){
            return 0;
        }
        int left= height(root->left);
        int right= height(root->right);
        int ans=max(left,right)+1;
        return ans;
    }
    bool isBalanced(Node *root)
    {
        if(root == NULL){
            return false;
        }
        
        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
        
        bool diff= abs(height(root->left)-height(root->right))<=1;
        
        if(right && left && diff)
        return true;
        else return false;
        
        
        //  Your Code here
    }
};
//gfg