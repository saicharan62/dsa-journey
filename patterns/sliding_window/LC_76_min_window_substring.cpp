class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> targetFreq;
        unordered_map<char, int> currFreq;

        for(char c : t){
            targetFreq[c]++;
        }

        int reqTypes = targetFreq.size();
        int matchedTypes = 0;

        int l = 0;
        int minLen = INT_MAX;
        int minStart = 0;

        for(int r=0; r<s.size(); r++){
            char ch = s[r];
            currFreq[ch]++;

            if(targetFreq.count(ch) && targetFreq[ch] == currFreq[ch])
                matchedTypes++;
            
            while(matchedTypes == reqTypes){
                if(r - l + 1 < minLen){
                    minLen = r - l + 1;
                    minStart = l;
                }

                char leftChar = s[l];
                currFreq[leftChar]--;

                if(targetFreq.count(leftChar) && currFreq[leftChar] < targetFreq[leftChar])
                    matchedTypes--;

                l++;
            }
        }
        if(minLen == INT_MAX)
            return "";
        
        return s.substr(minStart, minLen);
    }
};
