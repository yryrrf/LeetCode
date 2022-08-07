/*
Runtime: 8 ms, faster than 75.00% of C++ online submissions for Number of Arithmetic Triplets.
Memory Usage: 9.5 MB, less than 25.00% of C++ online submissions for Number of Arithmetic Triplets.
*/
class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_map<int,vector<int>> um;
        for(int i = 0; i<nums.size();i++) {
            um[nums[i]].push_back(i);
        }
        int ans = 0;
        for(int i = 0; i<nums.size(); i++) {
            if(um.count(nums[i]+diff) && um.count(nums[i]+diff*2)) {
                ans+=um[nums[i]+diff].size()*um[nums[i]+diff*2].size();
            }
        }
        return ans;
    }
};