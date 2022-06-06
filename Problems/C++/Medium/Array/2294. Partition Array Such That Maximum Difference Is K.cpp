/*
Runtime: 207 ms, faster than 100.00% of C++ online submissions for Partition Array Such That Maximum Difference Is K.
Memory Usage: 83.1 MB, less than 50.00% of C++ online submissions for Partition Array Such That Maximum Difference Is K.
*/
class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int ans = 0;
        int curr = nums[0];
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]-curr>k){
                ans++;
                curr = nums[i];
            }
        }
        return ans+1;
    }
};