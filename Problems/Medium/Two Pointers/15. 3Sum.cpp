/*
Runtime: 68 ms, faster than 78.12% of C++ online submissions for 3Sum.
Memory Usage: 20.1 MB, less than 66.95% of C++ online submissions for 3Sum.
*/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        int left,right,target;
        for(int i = 0;i< nums.size();i++){
            if(i>0 and nums[i] == nums[i-1]) continue;
            right=nums.size()-1;
            target = -nums[i];
            for(left = i+1;left<nums.size();left++){
                if(left>i+1 and nums[left]==nums[left-1]) continue;
                while(left<right and nums[left]+nums[right]>target){
                    right--;
                }
                if(left==right) break;
                if(nums[left]+nums[right]==target) result.push_back({nums[i],nums[left],nums[right]});
            }
        }
        return result;
    }
};

