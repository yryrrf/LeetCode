/*
Runtime: 36 ms, faster than 98.77% of C++ online submissions for Increasing Subsequences.
Memory Usage: 19.7 MB, less than 98.26% of C++ online submissions for Increasing Subsequences.
*/
class Solution {
public:
    vector<int> tmp;
    vector<vector<int>> ans;
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        dfs(0,-101, nums);
        return ans;
    }
    
    void dfs(int curr, int n, vector<int>& nums) {
        if(curr==nums.size()) {
            if(tmp.size()>=2) {
                ans.emplace_back(tmp);
            }
            return;
        }
        
        if(nums[curr]>=n) {
            tmp.emplace_back(nums[curr]);
            dfs(curr+1,nums[curr], nums);
            tmp.pop_back();
        }
        
        if(nums[curr]!=n) {
            dfs(curr+1, n, nums);
        }
    }
};