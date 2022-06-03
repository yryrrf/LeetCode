/*
Runtime: 10 ms, faster than 64.45% of C++ online submissions for Find First and Last Position of Element in Sorted Array.
Memory Usage: 13.7 MB, less than 64.29% of C++ online submissions for Find First and Last Position of Element in Sorted Array.
*/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0) return {-1,-1};
        int r = nums.size()-1, l = 0;
        int mid = (r+l)/2;
        while(l<=r){
            if(nums[mid]>target){
                r = mid-1;
            }else{
                l = mid+1;
            }
            mid = (r+l)/2;
        }
        if(nums[mid]!=target){
            return {-1,-1};
        }
        
        l = mid;
        r = mid;
        while(l>0 && nums[l-1]==target) l--;
        while(r<nums.size()-1 && nums[r+1]==target) r++;
        
        return {l,r};
    }
};