//TC - O(n)
//SC - O(1)
//technique - the core logic of sum will be adding max of left&right subtrees values to the current node value, that becomes current node's sum.

class Solution {
public:
    int maxPathDown(TreeNode* node, int& maxi){
        if(node == NULL) return 0;

        int left = max(0, maxPathDown(node->left, maxi));
        int right = max(0, maxPathDown(node->right, maxi));
        maxi = max(maxi, left+right+node->val);

        return max(left, right) + node->val;
        
    }
    int maxPathSum(TreeNode* root) {
       int maxi = INT_MIN;
       maxPathDown(root, maxi);
       return maxi;
    }
};
