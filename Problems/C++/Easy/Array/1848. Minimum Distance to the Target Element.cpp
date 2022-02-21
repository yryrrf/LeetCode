/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Minimum Distance to the Target Element.
Memory Usage: 9.8 MB, less than 32.29% of C++ online submissions for Minimum Distance to the Target Element.
*/
class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int ans = INT_MAX;
        for(int i = 0; i<nums.size();i++){
            if(nums[i]==target){
                ans = min(abs(i-start),ans);
            }
        }
        return ans;
    }
};