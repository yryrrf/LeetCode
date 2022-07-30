/*
Runtime: 12 ms, faster than 49.72% of C++ online submissions for Third Maximum Number.
Memory Usage: 9.2 MB, less than 51.32% of C++ online submissions for Third Maximum Number.
*/
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        int ans = nums[0];
        int cnt = 1;
        int tmp = nums[0];
        for(int i = 0; i<nums.size(); i++) {
            if(nums[i]!=tmp) {
                cnt++;
                tmp = nums[i];
            }
            if(cnt==3) return tmp;
        }
        return ans;
    }
};