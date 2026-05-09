// TC - O(n)
// SC - O(h)
// technique - we keep track of max element so far in the path and swap, if it's < than current element.

class Solution {
public:
    int dfs(TreeNode* root, int maxSoFar){
        if(root == NULL) return 0;

        int good = 0;
        if(root->val >= maxSoFar){
            good = 1;
            maxSoFar = root->val;
        }

        return good + dfs(root->left, maxSoFar) + dfs(root->right, maxSoFar);
    }
    int goodNodes(TreeNode* root) {
        return dfs(root, root->val);
    }
};
