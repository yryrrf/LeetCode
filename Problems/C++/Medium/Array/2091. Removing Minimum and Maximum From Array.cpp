/*
Runtime: 213 ms, faster than 58.80% of C++ online submissions for Removing Minimum and Maximum From Array.
Memory Usage: 88.2 MB, less than 81.15% of C++ online submissions for Removing Minimum and Maximum From Array.
*/
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        pair<int,int> minEle = {INT_MAX, 0};
        pair<int,int> maxEle = {INT_MIN, 0};
        for(int i = 0; i<nums.size(); i++) {
            if(nums[i] < minEle.first) {
                minEle = {nums[i], i};
            }
            if(nums[i]>maxEle.first) {
                maxEle = {nums[i],i};
            }
        }
        int f = min(minEle.second, maxEle.second);
        int b = max(minEle.second, maxEle.second);
        int n = nums.size();
        int ans = min(n-b+(f+1)-0 , min(b+1, n-f));
        
        return ans;
    }
};
