// TC - O(n)
// SC - O(n)
// technique - we use stack because we mostly need access to top or lastly added elements to sum the score and stack follows LIFO.

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int sum = 0;

        for(const string &op:operations){
            if(op == "+"){
                int top = st.top(); st.pop();
                int newTop = top + st.top();
                st.push(top);
                st.push(newTop);
                sum += newTop;
            }
            else if(op == "C"){
                sum -= st.top();
                st.pop();
            }
            else if(op == "D"){
                st.push(2 * st.top());
                sum += st.top();
            }
            else{
                st.push(stoi(op));
                sum += st.top();
            }

        }
        return sum;
    }
};
