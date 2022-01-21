/*
Runtime: 153 ms, faster than 65.72% of C++ online submissions for Count Number of Nice Subarrays.
Memory Usage: 67.7 MB, less than 73.61% of C++ online submissions for Count Number of Nice Subarrays.
*/
class Solution {
public:    
    int numberOfSubarrays(vector<int>& nums, int k) {
        int cnt = 0;
        int ans = 0;
        int left = 0, right = 0;
        while(right<nums.size()){
            if(nums[right++]%2==1){
                cnt++;
            }
            if(cnt==k){
                int tmp = right;
                while(right<nums.size() && nums[right]%2==0){
                    right++;
                }
                int ltmp = left;
                while(nums[left]%2==0){
                    left++;
                }
                ans+=(left-ltmp+1)*(right-tmp+1);
                left++;
                cnt--;
            }
        }
        return ans;
    }
};