// TC - O(1) for every operation
// SC - O(1)
// technique - By default stack performs all the op's in O(1) but fetching min. elem., for that purpose we keep another stack and then push the minimum 
//             everytime we encounters one, then finally, stack 2 will be having min. among all.

class MinStack {
public:
    stack<int> s1, s2;
    MinStack() {
        
    }
    
    void push(int val) {
        s1.push(val);
        if(s2.empty() || val <= s2.top()){
            s2.push(val);
        }
    }
    
    void pop() {
        if(s2.top() == s1.top()){
            s2.pop();
        }
        s1.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        return s2.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
