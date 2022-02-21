/*
Runtime: 400 ms, faster than 9.79% of C++ online submissions for Longest Increasing Subsequence.
Memory Usage: 10.6 MB, less than 34.52% of C++ online submissions for Longest Increasing Subsequence.
*/
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(),1);
        for(int i = 0;i<nums.size();i++){
            for(int j = 0;j<i;j++){
                if(nums[j]<nums[i]){
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
        }
        return *max_element(dp.begin(),dp.end());
    }
};