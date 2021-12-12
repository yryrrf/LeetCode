/*
Runtime: 48 ms, faster than 78.76% of C++ online submissions for Find All Numbers Disappeared in an Array.
Memory Usage: 33.8 MB, less than 53.12% of C++ online submissions for Find All Numbers Disappeared in an Array.
*/
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for(int num:nums){
            nums[(num-1)%nums.size()] += nums.size();
        }
        
        vector<int> ans;
        for(int i = 0; i<nums.size();i++){
            if(nums[i]<=nums.size()){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};