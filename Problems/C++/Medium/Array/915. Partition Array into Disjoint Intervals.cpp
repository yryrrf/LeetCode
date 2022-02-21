/*
Runtime: 20 ms, faster than 98.05% of C++ online submissions for Partition Array into Disjoint Intervals.
Memory Usage: 20.4 MB, less than 91.42% of C++ online submissions for Partition Array into Disjoint Intervals.
*/
class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int maxSum = 0;
        int leftMax = nums[0];
        int pos = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            maxSum = max(nums[i],maxSum);
            if(leftMax > nums[i]){
                pos = i;
                leftMax = maxSum;
            }
        }
        return pos+1;
    }
};