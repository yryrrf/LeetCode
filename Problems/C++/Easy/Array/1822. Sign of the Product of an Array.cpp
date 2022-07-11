/*
Runtime: 9 ms, faster than 51.22% of C++ online submissions for Sign of the Product of an Array.
Memory Usage: 10.2 MB, less than 43.04% of C++ online submissions for Sign of the Product of an Array.
*/
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;
        for(int i = 0; i<nums.size(); i++) {
            if(nums[i] == 0) return 0;
            if(nums[i]<0) ans*=-1;
        }
        return ans;
    }
};