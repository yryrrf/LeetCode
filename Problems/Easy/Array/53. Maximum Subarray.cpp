/*
Runtime: 4 ms, faster than 92.44% of C++ online submissions for Maximum Subarray.
Memory Usage: 13.2 MB, less than 52.54% of C++ online submissions for Maximum Subarray.
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int pre = 0;
        for(int num : nums){
            pre = max(pre+num,num);
            maxSum = max(maxSum,pre);
        }  
        return maxSum;
    }
};