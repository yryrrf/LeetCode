/*
Runtime: 5 ms, faster than 61.22% of C++ online submissions for Longest Valid Parentheses.
Memory Usage: 7.2 MB, less than 66.01% of C++ online submissions for Longest Valid Parentheses.
*/
class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> stk;
        int i = 0;
        stk.push(-1);
        int ans = 0;
        while(i<s.size()) {
            if(s[i]=='(') stk.push(i);
            else {
                stk.pop();
                if(stk.empty()){
                    stk.push(i);
                }else{
                    ans = max(ans, i-stk.top());
                }
            }
            ++i;
        }
        return ans;
    }
};