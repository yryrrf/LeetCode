/*
Runtime: 3 ms, faster than 43.82% of C++ online submissions for To Lower Case.
Memory Usage: 6.3 MB, less than 8.48% of C++ online submissions for To Lower Case.
*/
class Solution {
public:
    string toLowerCase(string s) {
        string ans = "";
        for(char c:s) {
            if(c>='A' && c<='Z') {
                ans+= (c+('a'-'A'));
            }else{
                ans+=c;
            }
        }
        return ans;
    }
};