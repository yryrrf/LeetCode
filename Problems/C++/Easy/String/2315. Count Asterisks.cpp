/*
Runtime: 5 ms, faster than 29.79% of C++ online submissions for Count Asterisks.
Memory Usage: 6.4 MB, less than 38.32% of C++ online submissions for Count Asterisks.
*/
class Solution {
public:
    int countAsterisks(string s) {
        int tmp = 1;
        int ans = 0;
        for(int i = 0; i<s.size(); i++) {
            if(s[i]=='|') {
                tmp^=1;
            }else if(tmp && s[i]=='*'){
                ans++;
            }
        }
        return ans;
    }
};