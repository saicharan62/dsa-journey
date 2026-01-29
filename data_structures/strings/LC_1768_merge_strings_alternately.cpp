//TC - O(max(n,m)
//SC - O(n+m)
//technique - we run a loop upto max. of sizes of both strings and append chars until both strings become empty.

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        string s;
        int n = word1.size();
        int m = word2.size();
        s.reserve(n + m);
        for(int i=0; i< max(n, m) ; i++){
            if(i < n){
                s.push_back(word1[i]);
            }
            if(i < m){
                s.push_back(word2[i]);
            }
        }
        return s;
    }
};
