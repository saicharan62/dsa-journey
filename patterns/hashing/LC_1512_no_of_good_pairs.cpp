//TC - O(n)
//SC - O(1)
//technique - we use hashing method to keep track of no. of times element appeared.

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> freq;
        int count = 0;

        for(int i:nums){
            count += freq[i];
            freq[i]++;
        }
        return count;
    }
};
