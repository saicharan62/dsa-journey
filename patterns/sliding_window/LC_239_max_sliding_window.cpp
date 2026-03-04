// TC - O(n)
// SC - O(k)
// technique - we need a DS which follows FIFO to store max. elements in decreasing order, so we use deque and we pop indices which are out of current
//             window & and also pop smaller elements from back to maintain order & if window size reaches k, we push the front element to the result 
//             vector.

// Note - we store indices not elements becuase we have to make sure they are in order for every window, storing elements cannot make that happen.

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        deque<int> dq;

        for(int i = 0; i < nums.size(); i++){
            if(!dq.empty() && dq.front() <= i - k){
                dq.pop_front();
            }
            while(!dq.empty() && nums[dq.back()] < nums[i]){
                dq.pop_back();
            }

            dq.push_back(i);

            if(i >= k - 1){
                res.push_back(nums[dq.front()]);
            }
        }
        return res;
    }
};
