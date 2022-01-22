/*
Runtime: 36 ms, faster than 32.86% of C++ online submissions for Remove All Adjacent Duplicates In String.
Memory Usage: 11.3 MB, less than 47.17% of C++ online submissions for Remove All Adjacent Duplicates In String.
*/
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stk;
        for(char c:s){
            if(!stk.empty() && c==stk.top()){
                stk.pop();
            }else{
                stk.push(c);
            }
        }
        string ans = "";
        while(!stk.empty()){
            ans+=stk.top();
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};