//TC - O(n)
//SC - O(h)
//technique - we update the min and max values a node to be compared with, for every run, recursively and make sure every left is < root, and every root is > root.

class Solution {
public:
    bool valid(TreeNode* root, long minVal, long maxVal){
        if(!root) return true;

        if(root->val <= minVal || root->val >= maxVal) return false;

        return valid(root->left, minVal, root->val) && valid(root->right, root->val, maxVal);

    }
    bool isValidBST(TreeNode* root) {
        return valid(root, LONG_MIN, LONG_MAX);
    }
};
