/*
Runtime: 146 ms, faster than 97.25% of C++ online submissions for Array Nesting.
Memory Usage: 91.3 MB, less than 86.11% of C++ online submissions for Array Nesting.
*/
class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i<nums.size(); i++) {
            if(nums[i]!=INT_MAX) {
                int tmp = nums[i];
                int curr = 0;
                while(nums[tmp]!=INT_MAX) {
                    curr++;
                    int tmp2 = tmp;
                    tmp = nums[tmp];
                    nums[tmp2] = INT_MAX;
                }
                ans = max(ans,curr);
            }
        }
        return ans;
    }
};