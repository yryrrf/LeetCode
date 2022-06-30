/*
Runtime: 4 ms, faster than 40.80% of C++ online submissions for Is Subsequence.
Memory Usage: 6.4 MB, less than 71.86% of C++ online submissions for Is Subsequence.
*/
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int p1 = 0;
        for(int i = 0; i<t.size(); i++) {
            if(p1==s.size()) return true;
            if(t[i]==s[p1]) {
                p1++;
            }
        }
        return p1==s.size();
    }
};