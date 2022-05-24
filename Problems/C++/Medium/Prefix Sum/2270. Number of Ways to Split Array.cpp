/*
Runtime: 189 ms, faster than 86.74% of C++ online submissions for Number of Ways to Split Array.
Memory Usage: 92.7 MB, less than 21.97% of C++ online submissions for Number of Ways to Split Array.
*/
class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        vector<long long> prefix(nums.size(),0);
        prefix[nums.size()-1] = nums[nums.size()-1];
        for(int i =nums.size()-2; i>=0; i--){
            prefix[i]= prefix[i+1] + nums[i];
        }
        int ans = 0;
        long long tmp = 0;
        for(int i = 0; i<nums.size()-1; i++){
            tmp+=nums[i];
            if(tmp>=prefix[i+1]) ans++;
        }
        return ans;
    }
};