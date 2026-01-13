//TC - O(n)
//SC - O(log n)
//technique - initiate a mid point in array and recursively change the pointers to take only one element at once as defined.

class Solution {
public:
    TreeNode* build(vector<int>& nums, int l, int r){
        if(l > r) return nullptr;
        
        int mid = l + (r-l)/2;

        TreeNode* root = new TreeNode(nums[mid]);

        root->left =  build(nums, l, mid-1);
        root->right =  build(nums, mid+1, r);

        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return build(nums, 0, nums.size() -1);
    }
};
