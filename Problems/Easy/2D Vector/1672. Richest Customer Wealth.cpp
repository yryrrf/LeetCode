/*
Runtime: 4 ms, faster than 93.62% of C++ online submissions for Richest Customer Wealth.
Memory Usage: 7.8 MB, less than 85.71% of C++ online submissions for Richest Customer Wealth.
*/
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int richest = 0;
        for(int i = 0 ; i<accounts.size();i++){
            int sum = 0;    
            for(int j = 0; j<accounts[0].size();j++){
                sum+=accounts[i][j];    
            }
            richest = max(richest,sum);
        }
        return richest;
    }
};