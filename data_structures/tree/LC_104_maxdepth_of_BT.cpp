//TC - O(n)
//SC - O(n) or O(n/2)
//technique - assign left height and right height as integers as outputs and return max of both + 1 or 0 if null.

class Solution {
public:
    int maxDepth(TreeNode* root) {
       if(root == NULL) return 0;

       int lh = maxDepth(root->left);
       int rh = maxDepth(root->right);

       return (1+max(lh, rh)); 
    }
};
