// TC - O(n)
// SC - O(n)
// technique - whenever an operator comes up, we first take top and just below the top, two elements and perform the operation on them and then push the result 
//             into the stack for further, after traversal, top of the stack will be final result.

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for(string& token:tokens){
            if(token == "+" || token == "-" ||
               token == "*" || token == "/"){

                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();

                if(token == "+") st.push(a+b);
                else if(token == "-") st.push(a-b);
                else if(token == "/") st.push(a/b);
                else st.push(a*b);
            }
            else{
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};
