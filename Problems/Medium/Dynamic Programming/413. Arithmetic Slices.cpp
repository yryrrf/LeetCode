/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Arithmetic Slices.
Memory Usage: 7.4 MB, less than 54.02% of C++ online submissions for Arithmetic Slices.
*/
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int count = 0;
        if(nums.size()<3) return 0;
        int diff = nums[1] - nums[0];
        int ans = 0;
        for(int i = 2; i<nums.size(); i++){
            if(nums[i]-nums[i-1]==diff){
                count++;
            }else{
                diff = nums[i] - nums[i-1];
                count = 0;
            }
            ans+=count;
        }
        return ans;
    }
};