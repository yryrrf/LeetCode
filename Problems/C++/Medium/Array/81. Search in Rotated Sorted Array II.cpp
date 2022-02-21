/*
Runtime: 4 ms, faster than 89.39% of C++ online submissions for Search in Rotated Sorted Array II.
Memory Usage: 14.1 MB, less than 30.39% of C++ online submissions for Search in Rotated Sorted Array II.
*/
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0,right = nums.size()-1;
        
        if (nums.size() == 0) {
            return false;
        }
        
        if (nums.size() == 1) {
            return nums[0] == target;
        }
        
        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid]==target) return true;
            
            if(nums[left]==nums[mid]&&nums[mid]==nums[right]){
                left++;
                right--;
            }else if(nums[mid]>=nums[left]){
                if(target>=nums[left]&&target<nums[mid]){
                    right = mid-1;
                }else{
                    left = mid+1;
                }
            }else{
                if(target>nums[mid]&&target<=nums[nums.size()-1]){
                    left = mid+1;
                }else{
                    right = mid-1;
                }
            }
            
        }
        return false;
    }
};