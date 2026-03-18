// TC - O(n)
// SC - O(1)
// technique - We use kadane's algo, in which we decide to continue the sub array or freshly start a new sub array at every step, by keeping track of currSum and maxSum.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int currS = nums[0];
        int maxS = nums[0];
        for(int i=1; i<nums.size(); i++){
            currS = max(nums[i], currS + nums[i]);
            maxS = max(maxS, currS);
        }
        return maxS;
    }
};
