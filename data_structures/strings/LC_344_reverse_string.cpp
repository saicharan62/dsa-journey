//TC - O(n)
//SC - O(1)
//technique - use of two pointers to make it in-place.

class Solution {
public:
    void reverseString(vector<char>& s) {
        int r=0;
        int w=s.size()-1;
        
        while(r<w){
        char t = s[r];
        s[r] = s[w];
        s[w] = t;
        r++;
        w--;
        }  
        
        return;  
    }
};
