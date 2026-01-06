//TC - O(n)
//SC - O(n)
//technique - first insert root value, then traverse for left, then traverse for right.


class Solution {
public:
    void preOrder(TreeNode* root, vector<int>& arr){
        if(root == nullptr) return;

        arr.push_back(root -> val);
        preOrder(root -> left, arr);
        
        preOrder(root -> right, arr);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> arr;

        preOrder(root, arr);
        return arr;
    }
};

//technique - we use iterative technique, as in use stack to avoid stack overflow in 1st methos, becuase that is out of our control but this method solves that issue.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    vector<int> preorderTraversal(TreeNode* root){
        
        vector<int> ans;
        if(root == nullptr) return ans;

        stack<TreeNode*> st;
        st.push(root);

        while(!st.empty()){
            root = st.top();
            st.pop();

            ans.push_back(root->val);

            if(root->right) st.push(root->right);
            if(root->left) st.push(root->left);
        }
        return ans;
    }
};
