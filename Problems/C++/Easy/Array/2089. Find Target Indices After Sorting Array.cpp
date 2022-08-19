/*
Runtime: 4 ms, faster than 88.15% of C++ online submissions for Find Target Indices After Sorting Array.
Memory Usage: 11.7 MB, less than 15.98% of C++ online submissions for Find Target Indices After Sorting Array.
*/
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int left = 0;
        int cnt = 0;
        for(int i = 0; i<nums.size(); i++) {
            if(nums[i]<target) left++;
            if(nums[i]==target) cnt++;
        }
        vector<int> ans;
        for(int i = 1; i<=cnt; i++) {
            ans.emplace_back(left++);
        }
        return ans;
    }
};