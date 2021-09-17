/*
Runtime: 12 ms, faster than 67.33% of C++ online submissions for Remove Duplicates from Sorted Array.
Memory Usage: 18.4 MB, less than 74.42% of C++ online submissions for Remove Duplicates from Sorted Array. 
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans = 0;
        for(int i = 1; i<nums.size(); i++){
            if(nums[i]==nums[i-1]){
               ans++;
            }else{
                nums[i-ans] = nums[i];
            }
        }

        return nums.size()-ans;
    }
};