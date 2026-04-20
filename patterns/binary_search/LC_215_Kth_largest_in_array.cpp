// TC - O(n log k)
// SC - O(n)
// technique - we make use of minHeap, by popping smaller element(top) everytime, we end up with K largesst elements of array, so return top of heap.

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minH;

        for(int num:nums) {
            minH.push(num);
            if(minH.size() > k) minH.pop();
        }
        return minH.top();
    }
};
