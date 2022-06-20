/*
Runtime: 323 ms, faster than 58.19% of C++ online submissions for Minimize Maximum Pair Sum in Array.
Memory Usage: 96.3 MB, less than 18.46% of C++ online submissions for Minimize Maximum Pair Sum in Array.
*/
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        for(int i = 0; i<nums.size()/2; i++) {
            ans = max(nums[i]+nums[nums.size()-1-i],ans);
        }
        return ans;
    }
};