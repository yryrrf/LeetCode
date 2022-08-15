/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Construct Smallest Number From DI String.
Memory Usage: 6 MB, less than 65.00% of C++ online submissions for Construct Smallest Number From DI String.
*/
class Solution {
public:
    string smallestNumber(string pattern) {
        string ans = "";
        int tmp = 0;
        for(int i = 0; i<=pattern.size(); i++) {
            ans+=('1'+i);
            if(i==pattern.size() || pattern[i]=='I') {
                reverse(ans.begin()+tmp, ans.end());
                tmp = i+1;
            }
        }
        return ans;
    }
};