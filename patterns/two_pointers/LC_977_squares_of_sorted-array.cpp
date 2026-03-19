// TC - O(n)
// SC - O(n)

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size());
        int l = 0, r = nums.size() - 1;
        int pos = nums.size() - 1;

        while(l <= r){
            int leftSq = nums[l] * nums[l];
            int rightSq = nums[r] * nums[r];

            if(leftSq > rightSq){
                res[pos--] = leftSq;
                l++;
            }
            else{
                res[pos--] = rightSq;
                r--;
            }
        }
        return res;
    }
};
