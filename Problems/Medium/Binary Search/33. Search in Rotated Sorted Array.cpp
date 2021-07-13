/*
Runtime: 3 ms, faster than 74.92% of C++ online submissions for Search in Rotated Sorted Array.
Memory Usage: 11.1 MB, less than 27.85% of C++ online submissions for Search in Rotated Sorted Array.
*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid]==target) return mid;
            
            if(nums[mid]<nums[right]){
                if(nums[mid]<target and nums[right]>=target){
                    left = mid+1;
                }else{
                    right = mid -1;
                }
            }else{
                if(nums[mid]>target and nums[left]<=target){
                    right = mid -1;
                }else{
                    left = mid+1;
                }
            }
        }
        return -1;
    }
};

