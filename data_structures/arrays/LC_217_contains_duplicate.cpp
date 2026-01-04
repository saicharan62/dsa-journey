//TC - O(n)
//SC - O(n)
//technique - using hashmap

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(int i:nums){
            if(st.contains(i)){
                return true;
            }
            st.insert(i);
        }
        return false;
    }
};
