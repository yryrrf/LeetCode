/*
Runtime: 23 ms, faster than 51.18% of C++ online submissions for Missing Number.
Memory Usage: 17.8 MB, less than 99.91% of C++ online submissions for Missing Number.
*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i<nums.size(); i++){
            ans^=nums[i]^i;
        }
        return ans^nums.size();
    }
};