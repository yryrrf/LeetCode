/*
Runtime: 84 ms, faster than 30.91% of C++ online submissions for Contains Duplicate.
Memory Usage: 51.3 MB, less than 22.56% of C++ online submissions for Contains Duplicate.
*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> us;
        for(int num:nums){
            if(us.count(num)) return true;
            us.emplace(num);
        }
        return false;
    }
};