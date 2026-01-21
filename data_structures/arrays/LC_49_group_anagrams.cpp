//TC - O(n*m)
//SC - O(m)+O(n*m)
//technique - we go from strings -> frequency mapping -> keys creation -> pushing words of keys into map -> print map's second element into array. 

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;

        for(string word:strs){
            vector<int> freq(26,0);

            for(char c:word){
                freq[c - 'a']++;
            }

            string key = "";
            for(int count : freq){
                key += to_string(count) + "#";
            }

            groups[key].push_back(word);
        }

        vector<vector<string>> result;
        for(auto& entry:groups){
            result.push_back(entry.second);
        }
        return result;
    }
};
