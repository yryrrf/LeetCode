/*
Runtime: 243 ms, faster than 95.39% of C++ online submissions for Count Number of Bad Pairs.
Memory Usage: 83.8 MB, less than 76.76% of C++ online submissions for Count Number of Bad Pairs.
*/
class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int> um;
        long long ans = 0LL;
        for(int i = 0; i<nums.size(); i++) {
            ans+= i - um[i-nums[i]]++;
        }
        return ans;
    }
};