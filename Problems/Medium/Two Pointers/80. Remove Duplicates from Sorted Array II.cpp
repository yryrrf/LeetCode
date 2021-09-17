/*
Runtime: 12 ms, faster than 9.45% of C++ online submissions for Remove Duplicates from Sorted Array II.
Memory Usage: 10.9 MB, less than 36.76% of C++ online submissions for Remove Duplicates from Sorted Array II.
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans = 0;
        bool repeated = false;
        for(int i = 1; i<nums.size(); i++){
            if(nums[i-1] == nums[i] && !repeated){
                repeated = true;
            }else if(nums[i-1] == nums[i] && repeated){
                ans++;
                
            }else{
                repeated = false;
                
            }
            nums[i-ans] = nums[i];
        }
        return nums.size()-ans;
    }
};