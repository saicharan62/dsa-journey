//TC - O(h)
//SC - O(1)
//technique - if nodes given are greater than root, we go search in left subtree, or vice versa.

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) return nullptr;

        int curr = root->val;
        if(curr < p->val && curr < q->val){
            return lowestCommonAncestor(root->right, p, q);
        }
        if(curr > p->val && curr > q->val){
            return lowestCommonAncestor(root->left, p, q);
        }
        return root;
    }
};
