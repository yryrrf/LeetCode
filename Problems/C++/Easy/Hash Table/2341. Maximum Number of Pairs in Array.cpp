/*
Runtime: 8 ms, faster than 50.00% of C++ online submissions for Maximum Number of Pairs in Array.
Memory Usage: 9.3 MB, less than 100.00% of C++ online submissions for Maximum Number of Pairs in Array.
*/
class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int> um;
        for(int num:nums) {
            um[num]++;
        }
        vector<int> ans = {0,0};
        for(auto it:um) {
            ans[0] += it.second/2;
            ans[1] += it.second%2;
        }
        return ans;
    }
};