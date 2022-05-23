/*
Runtime: 39 ms, faster than 92.03% of C++ online submissions for Count Number of Texts.
Memory Usage: 19 MB, less than 53.17% of C++ online submissions for Count Number of Texts.
*/
class Solution {
public:
    int countTexts(string pressedKeys) {
        vector<long long> dp(pressedKeys.size());
        dp[0] = 1;
        for(int i = 1; i<pressedKeys.size(); i++){
            dp[i] = dp[i-1];
            if(pressedKeys[i]==pressedKeys[i-1]){
                dp[i] += i>=2?dp[i-2]:1;
                if(i>=2 && pressedKeys[i]==pressedKeys[i-2]){
                    dp[i] += i>=3?dp[i-3]:1;
                    if((pressedKeys[i]=='7' || pressedKeys[i]=='9') && i>=3 && pressedKeys[i-3] == pressedKeys[i]){
                        dp[i]+=i>=4?dp[i-4]:1;
                    }
                }
            }
            dp[i]%=(long long)(1e9+7);
        }
        return (int)dp[pressedKeys.size()-1];
    }
};