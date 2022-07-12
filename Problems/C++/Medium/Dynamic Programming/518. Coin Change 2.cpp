/*
Runtime: 13 ms, faster than 88.30% of C++ online submissions for Coin Change 2.
Memory Usage: 7 MB, less than 94.17% of C++ online submissions for Coin Change 2.
*/
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> dp(amount+1,0);
        dp[0] = 1;
        for(int i = 0 ; i<coins.size(); i++) {
            for(int j = coins[i]; j<=amount; j++) {
                dp[j] += dp[j-coins[i]];
            }
        }
        return dp[amount];
    }
};