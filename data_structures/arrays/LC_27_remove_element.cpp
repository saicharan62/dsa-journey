//TC - O(n)
//SC - O(1)
//technique - use of read/write(two) pointers, to make the process in-place.

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int write = 0;
        for(int read=0; read<nums.size(); read++){
            if(nums[read] != val){
                nums[write] = nums[read];
                write++;
            }
        }
        return write;
    }
};
