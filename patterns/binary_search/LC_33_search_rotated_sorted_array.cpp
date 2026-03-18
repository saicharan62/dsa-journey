// TC - O(log n)
// SC - O(1)
// technique - Here, instead of two binary searches, we do the checks for sorted part of the array, whichever side is sorted, that code gets implemented.

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, h = nums.size() -1;
        while(l <= h){
            int m = l + (h - l)/2;
            if(nums[m] == target){
                return m;
            }
          // left sorted
            if(nums[l] <= nums[m]){
                if(nums[l] <= target && target < nums[m]){
                    h = m - 1;
                }
                else {
                    l = m + 1;
                }
            }
            // right sorted
            else {
                if(nums[m] < target && target <= nums[h]){
                    l = m + 1;
                }
                else {
                    h = m - 1;
                }
            }
        }   
        return -1;
    }
};
