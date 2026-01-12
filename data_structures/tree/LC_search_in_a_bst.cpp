//TC - O(log2 N)
//SC - O(1)
//technique - if target is < root, search in left subtree or vice versa.

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
      while(root != nullptr && root->val != val){

      if(root->val > val) {
        root = root->left;
      }
      else{
        root = root->right;
      }
      
      }
    return root;
    }
};
