/*
Runtime: 223 ms, faster than 12.46% of C++ online submissions for Number of Pairs of Strings With Concatenation Equal to Target.
Memory Usage: 67.3 MB, less than 22.51% of C++ online submissions for Number of Pairs of Strings With Concatenation Equal to Target.
*/
class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int ans = 0;
        for(int i = 0; i<nums.size()-1; i++) {
            for(int j = i+1; j<nums.size(); j++) {
                if(nums[i] + nums[j] == target) ans++;
                if(nums[j] + nums[i] == target) ans++;
            }
        }
        return ans;
    }    
};