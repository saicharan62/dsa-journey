//TC - O(n)
//SC - O(n)
//technique - after counting frequencies, we use bucket soting method to interchange freq. values and numbers, then print top k freq. elements.

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int i:nums){
            freq[i]++;
        }

        int n = nums.size();
        vector<vector<int>> bucket(n+1);
        for(auto &i:freq){
            bucket[i.second].push_back(i.first);
        }

        vector<int> ans;
        for(int i=n; i>=1 && ans.size() < k; i--){
            for(int x:bucket[i]){
                ans.push_back(x);
                if(ans.size()==k) break;
            }
        }
        return ans;
    }
};
