//TC - O(n)
//SC - O(1)
//technique - we calc. left elements product and right elemts product seperately and add them in array.

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        
        ans[0] = 1;
        for(int i=1; i<n; i++){
            ans[i] = ans[i-1]*nums[i-1];
            
        }
        int r_product = 1;
        for(int i=n-1; i>=0; i--){
            ans[i] *= r_product;
            r_product *= nums[i]; 
        }
        return ans;
    }
};
