/*
Runtime: 14 ms, faster than 91.08% of C++ online submissions for Build Array from Permutation.
Memory Usage: 16.1 MB, less than 98.87% of C++ online submissions for Build Array from Permutation.
*/
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        for(int i = 0; i<nums.size(); i++) {
            ans[i] = nums[nums[i]];
        }
        return ans;
    }
};