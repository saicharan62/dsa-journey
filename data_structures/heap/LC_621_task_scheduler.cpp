// TC - O(n), where n is no. of tasks given
// SC - O(1)
// technique - we count the freq. of each task & and find the maxFreq and no. of tasks having that freq.(countMax), and then
//             calc. the min. length req. by most freq. tasks using formula used in return statement, and then return max among vector size and calc. length(as calc. length might exceed vector size).

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26, 0);

        int maxFreq = 0;
        for(char c:tasks) {
            freq[c - 'A']++;
            maxFreq = max(maxFreq, freq[c - 'A']);
        }
        int countMax = 0;
        for(int f:freq) {
            if(f == maxFreq) 
                countMax++;
        }
        return max((int)tasks.size(), ((maxFreq-1)*(n+1)+countMax));
    }
};
