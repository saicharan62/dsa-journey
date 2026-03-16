// TC - O(log n)
// SC - O(1)
// technique - we use binary search on answer method, by calculating mid values upto X from 1, return the nearest value as a sqrt for X.

class Solution {
public:
    int mySqrt(int x) {
        int l = 0, h = x;
        int res = 0;

        while(l <= h){
            int m = l + (h-l)/2;

            if((long long)m*m > x){
                h = m-1;
            }
            else if((long long)m*m < x){
                res = m;
                l = m+1;
            }
            else 
                return m;
        }
        return res;
    }
};
