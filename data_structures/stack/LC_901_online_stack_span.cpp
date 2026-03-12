// TC - O(n)
// SC - O(n)
// technique - we use "MONOTONIC DECREASING STACK"
//             if the find the price higher than at the stack top, we merge span's of both and pop the stack, until there is no lower price left.

class StockSpanner {
public:
    stack<pair<int, int>> st;
    StockSpanner() {
        
    }
    
    int next(int price) {
        
        int span = 1;
        while(!st.empty() && price >= st.top().first){
            span += st.top().second;
            st.pop();
        }
        st.push({price, span});
    
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
