// TC - O(n log n)
// SC - O(n)
// technique - we make use of maxHeap to store stone weights and when we have > 1 elements, we add difference of top and next top element into the heap(if any), return 0 if heap is empty, if not top element of heap.

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxH;
        for(int stone:stones) {
            maxH.push(stone);
        }
        while(maxH.size() > 1) {
            int a = maxH.top(); maxH.pop();
            int b = maxH.top(); maxH.pop();

            if(a != b) {
                maxH.push(a - b);
            }
        }
        return maxH.empty() ? 0 : maxH.top();
    }
};
