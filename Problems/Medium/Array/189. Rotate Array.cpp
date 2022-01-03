/*
Runtime: 40 ms, faster than 19.18% of C++ online submissions for Rotate Array.
Memory Usage: 25.6 MB, less than 22.78% of C++ online submissions for Rotate Array.
*/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
        reverse(nums.begin(),nums.end());
        vector<int> ans(nums.size());
        for(int i = 0; i<k; i++){
            ans[i] = nums[k-i-1];
        }
        for(int i = k; i<nums.size(); i++){
            ans[i] = nums[nums.size()-i+k-1];
        }
        nums = ans;
    }
};