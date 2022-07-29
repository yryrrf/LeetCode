/*
Runtime: 36 ms, faster than 66.49% of C++ online submissions for Single Element in a Sorted Array.
Memory Usage: 22.4 MB, less than 9.27% of C++ online submissions for Single Element in a Sorted Array.
*/
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0, r = nums.size()-1;
        while(l<r) {
            int mid = (r+l)>>1;
            if(nums[mid] != nums[mid^1]) {
                r = mid;
            }else {
                l = mid + 1;
            }
        }
        return nums[l];
    }
};
