//TC - O(n)
//SC - O(1)
//technique - we use set to store the array and then check if the previous no. is +1 than current no. and maintain a streak of such elements.

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        s.reserve(nums.size());
        s.insert(nums.begin(), nums.end());

        int streak = 0;

        for(int i:s){
            if(s.find(i-1) != s.end()) 
                continue;

            int curr = i;
            int len = 1;
            while(s.find(curr + 1) != s.end()){
                len++;
                curr++; 
            }
            streak = max(len, streak);

        }
        return streak;
    }
};
