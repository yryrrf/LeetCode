/*
Runtime: 543 ms, faster than 42.86% of C++ online submissions for Replace Elements in an Array.
Memory Usage: 129.2 MB, less than 71.43% of C++ online submissions for Replace Elements in an Array.
*/
class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        unordered_map<int,int> um;
        for(int i = 0; i<nums.size(); i++){
                um[nums[i]] = i;
        }
        for(int i = 0; i<operations.size(); i++){
            auto it = um.find(operations[i][0]);
            int tmp = it->second;
            um.erase(it);
            um[operations[i][1]] = tmp;
        }
        vector<int> ans(nums.size(),0);
        for(auto it:um){
            ans[it.second] = it.first;
        }
        return ans;
    }
};