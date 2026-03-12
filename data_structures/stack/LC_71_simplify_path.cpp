// TC - O(n)
// SC - O(n)
// technique - we use stringstream and then getline methods to make parts out of th whole string, 
//             if we find '.' or '' skip those and pop the stack when '..' appears, and if none of these appears, but a 'word', we push it,
//             at last print the stack into a string.
class Solution {
public:
    string simplifyPath(string path) {
        stringstream ss(path);
        string token;
        stack<string> st;
        while(getline(ss, token, '/')){
            if(token == "" || token == "."){
                continue;
            }
            if(token == ".."){
                if(!st.empty()){
                    st.pop();
                }
            } else {
                st.push(token);
            }
        }

        string res;
        while(!st.empty()){
            res = "/" + st.top() + res;
            st.pop();
        }
        if(res == "") return "/";
        return res;
    }
};
