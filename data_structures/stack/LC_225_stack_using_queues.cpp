// TC - O(n)
// SC - O(n)
// technique - we need to simulate LIFO using a FIFO data structure, queue it is.
//             for pushing, we simply run a loop backwards and push the front elem. and then pop it.
//             for popping, we use front elem. as top as stack, and pop it.
//             for top, we just return elem. at front.

class MyStack {
public:
    queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        for(int i=q.size()-1; i>0; i--){
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int top = q.front();
        q.pop();
        return top;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
