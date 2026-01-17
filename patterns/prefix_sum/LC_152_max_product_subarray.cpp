//TC - O(n)
//SC - O(1)
//technique - we calculate prefix / suffix sum on the go, and take the max of both to calculate final max product.

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pre = 1;
        int suff = 1;
        int ans = 0;
        for(int i=0; i<nums.size(); i++){
            if(pre == 0) pre = 1;
            if(suff == 0) suff = 1;

            pre *= nums[i];
            suff *= nums[nums.size() -i -1];

            ans = max(ans, max(pre, suff));
        }
        return ans;

    }
};
