/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Implement Queue using Stacks.
Memory Usage: 7 MB, less than 48.14% of C++ online submissions for Implement Queue using Stacks.
*/
class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    MyQueue() {
    }
    
    void push(int x) {
        while(!s2.empty()) s2.pop();
        while(!s1.empty()){
            int n = s1.top();
            s2.push(n);
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
        int n = s1.top();
        s1.pop();
        return n;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        return s1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */