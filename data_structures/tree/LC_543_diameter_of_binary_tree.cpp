//TC - O(n)
//SC - O(1)
//technique - diameter will be longest dist. b/w any two nodes, so just adding left&right heights recursively and updating it.

class Solution {
public:
    int height(TreeNode* root, int& diameter){
        if(!root) return 0;

        int lh = height(root -> left, diameter);
        int rh = height(root -> right, diameter);
        diameter = max(diameter, lh+rh);
        return 1+max(lh, rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        height(root, diameter);
        return  diameter;
    }
};
