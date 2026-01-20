//TC - O(n)
//SC - O(n)
//technique - create an array of double size and input two values at once by looping only N times.

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2*n);
        
        for(int i=0; i<n; i++){
            ans[i] = nums[i];
            ans[i+n] = nums[i];
        }
        return ans;
    }
};
