/*
Runtime: 156 ms, faster than 56.49% of C++ online submissions for Find the Duplicate Number.
Memory Usage: 84 MB, less than 11.41% of C++ online submissions for Find the Duplicate Number.
*/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> us;
        for(int num:nums){
            if(us.count(num)) return num;
            us.emplace(num);
        }
        return 0;
    }
};