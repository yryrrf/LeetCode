/*
Runtime: 219 ms, faster than 63.28% of C++ online submissions for Monotonic Array.
Memory Usage: 96.4 MB, less than 64.52% of C++ online submissions for Monotonic Array.
*/
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool tmp1 = true;
        bool tmp2 = true;
        for(int i = 1; i<nums.size(); i++) {
            if(!(nums[i] >= nums[i-1])) tmp1 = false;
            if(!(nums[i] <= nums[i-1])) tmp2 = false;

        }
        return tmp1 || tmp2;
    }
};