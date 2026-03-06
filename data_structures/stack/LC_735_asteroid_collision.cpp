// TC - O(n)
// SC - O(n)
// technique - if a collison happens and elem. gets destroyed, we keep a boolean variable to keep track of it, and then we dont add it to the stack.

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for(int x:asteroids){
            bool destroyed = false;

            while(!st.empty() && st.top() > 0 && x < 0){
                if(st.top() < -x){
                    st.pop();
                    continue;
                }
                else if(st.top() == -x){
                    st.pop();
                }
                destroyed = true;
                break;
            }
            if(!destroyed){
                st.push(x);
            }

        }
        vector<int> ans(st.size());
        for(int i=st.size() -1; i >=0; i--){
            ans[i] = st.top();
            st.pop();
        }

        return ans;
    }
};
