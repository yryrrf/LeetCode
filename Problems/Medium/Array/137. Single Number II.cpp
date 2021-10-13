/*
Runtime: 15 ms, faster than 17.18% of C++ online submissions for Single Number II.
Memory Usage: 9.6 MB, less than 25.13% of C++ online submissions for Single Number II.
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int count = 0;
        sort(nums.begin(),nums.end());
        
        for(int i = 1; i<nums.size(); i++){
            if(nums[i]==nums[i-1]){
                count++;
            }else if(count!=2){
                return nums[i-1];
            }else{
                count = 0;
            }
        }
        
        return nums[nums.size()-1];
    }
};