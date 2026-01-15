//TC - O(n)
//SC - O(n)
//technique - we implement hashing and check if we get the current element by adding/subtracting the given k value.

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int count = 0;
        
        for(int i:nums){
            if(freq.count(i-k)) count += freq[i-k];
            if(freq.count(i+k)) count += freq[i+k];
            freq[i]++;
        }
        return count;
    }
};
