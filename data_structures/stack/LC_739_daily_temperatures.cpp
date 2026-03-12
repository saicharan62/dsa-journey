// TC - O(n)
// SC - O(n)
// technique - use "MONOTONIC DECREASING STACK".
//             we maintain indices highest temperatures at the top of the stack, if we find a hotter temp. we check it with stack top, 
//             we set the indices of lower temperatures in th result array as (i - index at top of stack), which means no. of days to wait.

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> res(n, 0);
        stack<int> st;

        for(int i=0; i<n; i++){
            while(!st.empty() && temperatures[i] > temperatures[st.top()]){
                int top = st.top();
                st.pop();
                res[top] = i - top;
            }
            st.push(i);
        }
        return res;
    }
};
