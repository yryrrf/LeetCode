/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Decode Ways.
Memory Usage: 6.3 MB, less than 40.42% of C++ online submissions for Decode Ways.
*/
class Solution {
public:
    int numDecodings(string s) {
        vector<int> dp(s.size()+1);
        dp[0] = 1;
        for(int i = 1; i<dp.size(); i++){
            if(s[i-1] != '0') dp[i] += dp[i-1];
            if(i>1 and s[i-2] != '0' and (s[i-2]-'0')*10 +(s[i-1]-'0') <=26) dp[i] += dp[i-2];
        }
        return dp[dp.size()-1];
    }
};