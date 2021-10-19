class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0, right = 0;
        int sum = 0;
        int ans = INT_MAX;
        while(right<nums.size()){
            sum+=nums[right];
            
            while(sum>=target){
                ans=min(right-left+1,ans);
                sum-=nums[left];
                left++;
            }

            right++;
        }
        return ans==INT_MAX?0:ans;
    }
};