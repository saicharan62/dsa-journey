// TC - O(n)
// SC - O(1)
// technique - Given array is sorted, so we have problem with only the elements at both edges, we use two pointer + sliding window approach,
//             by shrinking window on whicever side the difference with x is lower or smaller element if a tie occurs.

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l = 0;
        int r = arr.size() - 1;

        while(r-l+1 > k){
            if(abs(arr[l] - x) > abs(arr[r] - x)){
                l++;
            }
            else{
                r--;
            }
        }
        return vector<int> (arr.begin()+l, arr.begin()+r+1);
    }
};
