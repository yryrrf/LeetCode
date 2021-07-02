/*
Runtime: 468 ms, faster than 5.04% of C++ online submissions for 3Sum Closest.
Memory Usage: 9.8 MB, less than 91.33% of C++ online submissions for 3Sum Closest.
*/
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int result = 9999;
        int left,right;
        sort(nums.begin(),nums.end()); 
        for(int i = 0;i<nums.size();i++){
            if(i>0 and nums[i]==nums[i-1]) continue;
            for(left = i+1;left<nums.size();left++){
                if(left>i+1 and nums[left]==nums[left-1]);
                for(right=left+1;right<nums.size();right++){
                    if(abs(nums[i]+nums[left]+nums[right]-target)<abs(result-target)){
                        result=nums[i]+nums[left]+nums[right];
                    }
                }
            }
        }
        
        
        return result;
    }
};
