// TC - O(n)
// SC - O(n)
// technique - whenever we see a closing bracket, we check is the previous char. is a opening bracket of that sort, for that LIFO approach, we use stack.

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char c:s){
            if(c == '(' || c == '{' || c == '['){
                st.push(c);
                continue;
            }
            if(st.empty()) return false;

            char top = st.top();
            st.pop();

            if((c == ')' && top != '(')||
               (c == '}' && top != '{')||
               (c == ']' && top != '['))
                return false; 
            
            
        }
        return st.empty();
    }
};
