/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Subsets.
Memory Usage: 6.9 MB, less than 94.86% of C++ online submissions for Subsets.
*/
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result = {{}};
        for(int i = 0;i<nums.size();i++){
            int length = result.size();
            for(int j = 0;j<length;j++){
                vector<int> curr = result[j];
                curr.push_back(nums[i]);
                result.push_back(curr);
            }
        }
        return result;
    }
};
