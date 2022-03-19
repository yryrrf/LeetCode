/*
Runtime: 20 ms, faster than 65.07% of C++ online submissions for Minimum Difference Between Highest and Lowest of K Scores.
Memory Usage: 13.6 MB, less than 94.79% of C++ online submissions for Minimum Difference Between Highest and Lowest of K Scores.
*/
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.rbegin(), nums.rend());
        int ans = INT_MAX;
        for(int i =0 ;i+k-1<nums.size(); i++){
            ans = min(ans, nums[i]-nums[i+k-1]);
        }
        return ans;
    }
};