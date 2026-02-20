//TC - O(n log n)
//SC - O(1)
//technique - we add pick i and (n-1-i) elements for every i, as these are low and high for that element.

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        int req = 0;
        

        for(int i=0; i<n/2; i++){
            req = max(req, nums[i] + nums[n-1-i]);
        }
        return req;
    }
};
