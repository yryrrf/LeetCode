/*
Runtime: 20 ms, faster than 82.30% of C++ online submissions for Min Stack.
Memory Usage: 16.5 MB, less than 32.45% of C++ online submissions for Min Stack.
*/

class MinStack {
public:
    stack<int> norStack;
    stack<int> minStack;
    /** initialize your data structure here. */
    MinStack() {
        minStack.push(INT_MAX);
    }
    
    void push(int val) {
        norStack.push(val);
        minStack.push(min(val,minStack.top()));
    }
    
    void pop() {
        norStack.pop();
        minStack.pop();
    }
    
    int top() {
        return norStack.top();
    }
    
    int getMin() {
        return minStack.top();
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