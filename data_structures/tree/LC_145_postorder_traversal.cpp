//TC - O(n)
//SC - O(n)
//technique - first traverse for left, then traverse for right, and then print root value.

class Solution {
public:
    void postOrder(TreeNode* root, vector<int>& arr){
        if(root == nullptr) return;

        
        postOrder(root -> left, arr);
        
        postOrder(root -> right, arr);
        arr.push_back(root -> val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> arr;

        postOrder(root, arr);
        return arr;
    }
};

//TC - O(n)
//SC - O(n*h)
//technique - we use 2 stacks, one for traversals, other for final post order saving and an array to fill with values and return finally.

class Solution {
    public:
        vector<int> postorderTraversal(TreeNode* root){
            
            vector<int> postorder;
            if(root == NULL) return postorder;

           
            stack<TreeNode*> st1, st2;
            st1.push(root);
            while(!st1.empty()){
                root = st1.top();
                st1.pop();
                st2.push(root);

                if(root->left != NULL){
                    st1.push(root->left);
                }
                if(root->right != NULL){
                    st1.push(root->right);
                }

            }
            while(!st2.empty()){
                postorder.push_back(st2.top()->val);
                st2.pop();
            }
            return postorder;
        }
};
