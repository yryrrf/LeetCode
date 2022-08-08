/*
Runtime: 9 ms, faster than 19.77% of C++ online submissions for Make Array Zero by Subtracting Equal Amounts.
Memory Usage: 8.6 MB, less than 5.96% of C++ online submissions for Make Array Zero by Subtracting Equal Amounts.
*/
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> us(nums.begin(), nums.end());
        return us.size() - us.count(0);
    }
};