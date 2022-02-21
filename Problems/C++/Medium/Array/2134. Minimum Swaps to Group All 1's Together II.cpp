/*
Runtime: 149 ms, faster than 53.81% of C++ online submissions for Minimum Swaps to Group All 1's Together II.
Memory Usage: 80.4 MB, less than 93.66% of C++ online submissions for Minimum Swaps to Group All 1's Together II.
*/
class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int cnt = 0;
        for(int i = 0; i<nums.size(); i++){
            cnt+=nums[i];
        }
        if(cnt==0) return 0;
        int curr = 0;
        for(int i = 0; i<cnt; i++){
            curr+=1-nums[i];
        }
        int ans = curr;
        for(int i = 1; i<nums.size(); i++){
            if(nums[i-1]==0) curr--;
            if(nums[(i+cnt-1)%nums.size()]==0) curr++;
            ans = min(ans,curr);
        }
        return ans;
    }
};