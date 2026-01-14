//TC - O(lon n)
//SC - O(log n)
//technique - we first subtract 1 to make the no. 0-based and then recursively call the function to deduce char from 26 alphabets.

class Solution {
public:
    string convertToTitle(int columnNumber) {
        if(columnNumber==0) return "";

        int n = columnNumber - 1;
        return convertToTitle(n/26) + char('A'+ n% 26);
    }
};
