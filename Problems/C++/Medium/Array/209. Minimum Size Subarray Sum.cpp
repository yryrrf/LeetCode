/*
Runtime: 8 ms, faster than 70.51% of C++ online submissions for Minimum Size Subarray Sum.
Memory Usage: 10.6 MB, less than 15.31% of C++ online submissions for Minimum Size Subarray Sum.
*/
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0, right = 0;
        int minLength = INT_MAX;
        int sum = 0;
        for(int i = 0; i<nums.size(); i++){
            sum+=nums[i];
            while(sum>=target){
                minLength = min(minLength, i-left+1);
                sum -=nums[left];
                left++;
            }          
        }
        return minLength==INT_MAX?0:minLength;
    }
};