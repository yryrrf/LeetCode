/*
Runtime: 38 ms, faster than 87.89% of C++ online submissions for Next Greater Element II.
Memory Usage: 24.4 MB, less than 33.56% of C++ online submissions for Next Greater Element II.
*/
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans(nums.size(),-1);
        stack<int> stk;
        int n = nums.size();
        for(int i = n-1; i>=0; i--) stk.push(nums[i]);
        for(int i = n-1; i>=0; i--) {
            while(!stk.empty() && nums[i]>=stk.top()) {
                stk.pop();
            }
            if(!stk.empty()) {
                ans[i] = stk.top();
            }
            stk.push(nums[i]);
        }
        return ans;
    }
};
 