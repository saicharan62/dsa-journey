// TC - O(log n)
// SC - O(1)
// technique - we use finding lower-bound technique of binary search to find minimum in O(log n) time.

class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, h = nums.size() -1;
        while(l < h){
            int m  = l + (h - l)/2;
            if(nums[m] < nums[h]){
                h = m;
            }
            else {
                l = m + 1;
            }
        }
        return nums[l];
    }
};
