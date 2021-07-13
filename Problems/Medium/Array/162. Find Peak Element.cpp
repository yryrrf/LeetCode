/*
Runtime: 4 ms, faster than 69.30% of C++ online submissions for Find Peak Element.
Memory Usage: 8.8 MB, less than 88.40% of C++ online submissions for Find Peak Element.
*/
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]) return i;
        }
        return nums.size()-1;
    }
};