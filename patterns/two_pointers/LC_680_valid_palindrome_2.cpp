//TC - O(n)
//SC - O(1)
//technique - using a helper function to check palindrome seperately

class Solution {
public:
    bool isPalindromeRange(string &s, int left, int right){
        while(left<right){
            if(s[left]!=s[right]) return false;
            left++;
            right--;

        }
        return true;
    }
    bool validPalindrome(string s) {
        int l=0;
        int r=s.length() -1;
        while(l<r){
            if(s[l]==s[r]){
                l++;
                r--;
            } else {
                return isPalindromeRange(s, l+1, r) || isPalindromeRange(s, l, r-1);
            }
            
        }
        return true;
    }
};
