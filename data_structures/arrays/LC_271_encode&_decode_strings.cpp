//TC - O(n*m)
//SC - O(n*m)
//technique - we append length, # to string while encoding and in decoding, we can recognize strings seperately using length number for looping and #, to know where to stop.

class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(string& s:strs){
            res += to_string(s.size()) + "#" + s;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i=0;
        while(i<s.size()){
            int j=i;

            while(s[j] != '#') j++;
            
            int len = stoi(s.substr(i, j-i));
            j++;

            res.push_back(s.substr(j, len));
            i = j+len;
        }
        return res;
    }
};
