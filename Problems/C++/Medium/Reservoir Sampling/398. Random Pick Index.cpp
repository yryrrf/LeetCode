/*
Runtime: 230 ms, faster than 15.82% of C++ online submissions for Random Pick Index.
Memory Usage: 51.7 MB, less than 61.53% of C++ online submissions for Random Pick Index.
*/
class Solution {
public:
    unordered_map<int,vector<int>> um;
    Solution(vector<int>& nums) {
        for(int i = 0; i<nums.size(); i++){
            um[nums[i]].emplace_back(i);
        }
        
    }
    
    int pick(int target) {
        auto& it = um[target];
        int ans = it[0];
        it.erase(it.begin());
        it.push_back(ans);
        return ans;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */