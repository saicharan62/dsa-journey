// TC - O(m * logk), where m is no. of add() calls
// SC - O(k)
// technique - we make use of minHeap, and store smallest K values in the heap, and if size of it crosses K, we pop out the elements.

class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    int k;

    KthLargest(int k, vector<int>& nums) {
        this -> k = k;

        for(int num:nums) {
            pq.push(num);
            if(pq.size() > k) pq.pop();
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size() > k) pq.pop();

        return pq.top();
    }
};
