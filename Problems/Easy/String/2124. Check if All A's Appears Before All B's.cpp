/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Check if All A's Appears Before All B's.
Memory Usage: 6.3 MB, less than 10.66% of C++ online submissions for Check if All A's Appears Before All B's.
*/
class Solution {
public:
    bool checkString(string s) {
        bool flag = false;
        for(int i = 0; i<s.size(); i++){
            if(s[i]=='b') flag = true;
            if(s[i]=='a' && flag){
                return false;
            }
        }
        return true;
    }
};