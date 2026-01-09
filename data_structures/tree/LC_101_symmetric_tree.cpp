//TC - O(n)
//SC - O(h)
//technique - we check if the values on exact opposite nodes are same, to be a symmetric tree.

class Solution {
public:
    bool mirrorTree(TreeNode* root1, TreeNode* root2){
        if(root1 == NULL && root2 == NULL) return true;
        if(root1 == NULL || root2 == NULL) return false;

        if(root1->val != root2-> val) return false;

        return mirrorTree(root1->left, root2->right) && mirrorTree(root1->right, root2->left);

    }
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return true;

        return mirrorTree(root->left, root->right);
    }
};
