/*
Runtime: 18 ms, faster than 26.38% of C++ online submissions for Concatenation of Array.
Memory Usage: 12.6 MB, less than 71.84% of C++ online submissions for Concatenation of Array.
*/
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = nums;
        for(int num: nums){
            ans.push_back(num);
        }
        return ans;
    }
};