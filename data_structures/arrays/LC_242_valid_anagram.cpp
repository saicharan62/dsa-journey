//TC - O(n)
//SC - O(1)
//technique - we first ++ the frequency of charswith first string and then -- it using second one, if all the count is zero, true anagram.

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        vector<int> freq(26,0);
        
        for(int i=0; i<s.length(); i++){
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }
        for(int i:freq){
            if(i != 0) return false;
        }
        return true;
    }
};
