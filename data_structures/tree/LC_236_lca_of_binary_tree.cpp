//TC - O(n)
//SC - O()
//technique - we return root as is for every node and whenever there will be returning of both numbers to a node from below, that is the LCA of given nodes.

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL || root == p || root == q) return root;

        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);

        if(left == NULL) return right;
        else if(right == NULL) return left;
        else return root;
    }
};
