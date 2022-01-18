/*
Runtime: 308 ms, faster than 98.81% of C++ online submissions for Solving Questions With Brainpower.
Memory Usage: 115.2 MB, less than 75.24% of C++ online submissions for Solving Questions With Brainpower.
*/
class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        vector<long long> dp(questions.size()+1);
        for(int i = questions.size()-1; i>=0; i--){
            vector<int>& tmp = questions[i];
            int j = i+tmp[1]+1;
            dp[i] = max(dp[i+1], tmp[0]+(j<questions.size()?dp[j]:0));
        }
        return dp[0];
    }
};
