//TC - O(n)
//SC - O(1)
//technique - we assign current number to a variable and keep on change it, whenever count of it becomes zero.

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int elem;

        for (int x : nums) {
            if (count == 0) {
                elem = x;
                count = 1;
            }
            else if (x == elem) {
                count++;
            }
            else {
                count--;
            }
        }

        return elem;
    }
};
