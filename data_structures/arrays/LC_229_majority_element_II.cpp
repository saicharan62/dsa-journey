//TC - O(n)
//SC - O(1)
//technique - we use boyer-moore algo. where we first count frequencies of elements by keeping at most 2 elements at a time
//            and then in next iteration, we count frequencies of those two elements to get actual freq. 
//            so that we can figure out (n/3) times occured ones.

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int elem1 = 0, elem2 = 0;
        int count1 = 0, count2 = 0;

        for(int x:nums){
            if(x == elem1) count1++;
            else if(x == elem2) count2++;

            else if(count1 == 0){
                elem1 = x;
                count1 = 1;
            }
            else if(count2 == 0){
                elem2 = x;
                count2 = 1;
            }
            else{
                count1--;
                count2--;
            }
        }        
        count1 = count2 = 0;
        for(int x:nums){
            if(x == elem1) count1++;
            else if(x == elem2) count2++;
        }
        vector<int> ans;
        int n = nums.size();
        if(count1 > n/3) ans.push_back(elem1);
        if(count2 > n/3) ans.push_back(elem2);

        return ans;
    }
};
