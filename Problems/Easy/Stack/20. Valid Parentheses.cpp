/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Valid Parentheses.
Memory Usage: 6.4 MB, less than 39.08% of C++ online submissions for Valid Parentheses.
*/
class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2!=0) return false;
        unordered_map<char,char> um = 
        {
            {')','('},
            {'}','{'},
            {']','['}
        };
        stack<char> stk;
        for(char c:s){
            if(um.count(c)){
                if(stk.empty() or stk.top() != um[c]){
                    return false;
                }else{
                    stk.pop();
                }
            }else{
                stk.push(c);
            }
        }
        if(!stk.empty()) return false;
        return true;
    }
};