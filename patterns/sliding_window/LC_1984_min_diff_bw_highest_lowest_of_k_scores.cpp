//TC - O(n log n)
//SC - O(1)
//technique - we calc. diff. b/w highest possible k, [n+k-1] and lowest possible k, [i].

class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int min_diff = INT_MAX;
        for(int i=0; i<=n-k; i++){
            int diff = nums[i+k-1] - nums[i];
            min_diff = min(min_diff, diff);
        }
        return min_diff;
    }
};
