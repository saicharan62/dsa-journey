//TC - O(n log n)
//SC - O(n)
//technique - instead of making pairs, we jump 2 steps forward for every iteration, which helps directly pick lowest one.

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
      int sum = 0;
      sort(nums.begin(), nums.end());  
      for(int i=0; i<nums.size(); i+=2){
        sum += nums[i];
      }  
      return sum;
    }
};
