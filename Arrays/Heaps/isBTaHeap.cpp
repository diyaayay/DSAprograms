class Solution {
  public:
  
  int counttotal(struct Node* tree){
      if(tree==NULL){
          return 0;
      }
      
      int ans=1+counttotal(tree->left)+counttotal(tree->right);
      return ans;
  }
  bool isCBT(struct Node* tree, int index,int tn){
      if(tree==NULL){
          return true;
      }
      if(index>=tn){
          return false;
      }
      else{
          bool left = isCBT(tree->left,2*index+1,tn);
          bool right = isCBT(tree->right,2*index+2,tn);
          return left&&right;
          
      }
  }
  
  bool isMaxOrder(struct Node* tree){
      if(tree->left==NULL&&tree->right==NULL){
          return true;
      }
      if(tree->right==NULL){
          return tree->data>tree->left->data;
      }
      bool left=isMaxOrder(tree->left);
      bool right=isMaxOrder(tree->right);
      return left&&right &&(tree->left->data<tree->data&&tree->data>tree->right->data);
  }
  
  
    bool isHeap(struct Node* tree) {
        int tn=counttotal(tree);
        // code here
        int index=0;
        if(isCBT(tree,index,tn)&&isMaxOrder(tree)){
            return true;
        }else{
            return false;
        }
    }
};