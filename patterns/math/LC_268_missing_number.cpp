//TC - O(n)
//SC - O(1)
//technique - first calc. sum of elements using formula of sum of n natural no's and then just subtract the array sum to get missing no.

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum1 = (n*(n+1)) / 2;
        int sum2 = 0;
        for(int i=0; i<n; i++){
            sum2 += nums[i];
        }
        return sum1 - sum2;
    }
};
