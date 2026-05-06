// TC - O(n)
// SC - O(1)
// technique - if the replacements req. is > k, then we shrink the window, or else we can proceed with freq. counting and looking for maximum length of sub string with single char.

class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0, r = 0;
        int maxFreq = 0;
        int maxLen = 0;
        vector<int> freq(26,0);
        while(r < s.size()){
            freq[s[r] - 'A']++;

            maxFreq = max(maxFreq, freq[s[r] - 'A']);

            while((r-l+1) - maxFreq > k){
                freq[s[l] - 'A']--;
                l++;
            }
            maxLen = max(maxLen, r-l+1);
            r++;
        }
        return maxLen;
    }
};
