/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Count Elements With Strictly Smaller and Greater Elements .
Memory Usage: 9.1 MB, less than 81.85% of C++ online submissions for Count Elements With Strictly Smaller and Greater Elements .
*/
class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int f = 0;
        int l = nums.size()-1;
        while( f<nums.size() && nums[f] == nums[0]) f++;
        while( l>=0 && nums[l] == nums[nums.size()-1]) l--;
        return l-f+1 > 0 ? l-f+1:0;
    }
};