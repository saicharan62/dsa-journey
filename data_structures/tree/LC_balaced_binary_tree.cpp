//TC - O(n)
//SC - O(h)
//technique - just checking if difference b/w any two subtrees are >1.

class Solution {
public:
    int height(TreeNode* root){
        if(root == NULL) return 0;

        int lh = height(root->left);
        if(lh == -1) return -1;
        int rh = height(root->right);
        if(rh == -1) return -1;
        if(abs(lh - rh)>1) return -1;

        return max(lh, rh)+ 1;
    }
    bool isBalanced(TreeNode* root) {
        
        return height(root) != -1;

        
    }
};
