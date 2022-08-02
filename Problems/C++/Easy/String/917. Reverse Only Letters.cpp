/*
Runtime: 5 ms, faster than 17.31% of C++ online submissions for Reverse Only Letters.
Memory Usage: 6.1 MB, less than 16.30% of C++ online submissions for Reverse Only Letters.
*/
class Solution {
public:
    string reverseOnlyLetters(string s) {
        string tmp = "";
        for(char c:s) {
            if((c>='a' && c<='z') || (c>='A' && c<='Z')) tmp+=c;
        }
        string ans = "";
        int idx = tmp.size()-1;
        for(int i = 0; i<s.size(); i++) {
            char c =s[i];
            if((c>='a' && c<='z') || (c>='A' && c<='Z')) {
                ans+=tmp[idx--];
                
            }else{
                ans+=s[i];
            }
        }
        return ans;
    }
};