/*
Runtime: 36 ms, faster than 65.88% of C++ online submissions for Binary Search.
Memory Usage: 27.6 MB, less than 62.21% of C++ online submissions for Binary Search.
*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int mid;
        while(left<=right){
            mid = (left+right)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]<target){
                left = mid + 1;
            }else{
                right = mid - 1;
            }
            
        }
        
        return -1;
    }
};