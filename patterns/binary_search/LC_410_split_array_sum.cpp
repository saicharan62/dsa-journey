// TC - O(log n)
// SC - O(1)

class Solution {
public:
    bool canSplit(vector<int>& nums, int k, int maxSum) {
        int cnt = 1;
        int sum = 0;

        for(int x : nums) {
            if(sum + x > maxSum) {
                cnt++;
                sum = x;
            } else {
                sum += x;
            }
        }
        return cnt <= k;
    }
    int splitArray(vector<int>& nums, int k) {
        int l = *max_element(nums.begin(), nums.end());
        int h = accumulate(nums.begin(), nums.end(), 0);

        while(l <= h) {
            int m = l + (h - l)/2;

            if(canSplit(nums, k, m)) {
                h = m - 1;
            } else {
                l = m + 1;
            }
        }
        return l;
    }
};
