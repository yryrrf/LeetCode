/*
Runtime: 106 ms, faster than 66.12% of C++ online submissions for Longest Harmonious Subsequence.
Memory Usage: 39.9 MB, less than 70.83% of C++ online submissions for Longest Harmonious Subsequence.
*/
class Solution {
public:
    int findLHS(vector<int>& nums) {
        int ans = 0;
        unordered_map<int,int> um;
        for(int num:nums) um[num]++;
        for(auto it:um){
            if(um.count(it.first+1)){
                ans = max(ans,it.second+um[it.first+1]);
            }
        }
        return ans;
    }
};