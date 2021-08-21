/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Maximum Nesting Depth of the Parentheses.
Memory Usage: 6.1 MB, less than 68.56% of C++ online submissions for Maximum Nesting Depth of the Parentheses.
*/
class Solution {
public:
    int maxDepth(string s) {
        int count;
        int result;
        for(char c:s){
            count += (c=='(')?1:0;
            count -=(c==')')?1:0;
            result = max(result,count);
        }
        return result;  
    }
};