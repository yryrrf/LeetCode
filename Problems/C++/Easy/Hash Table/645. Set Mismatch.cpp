/*
Runtime: 92 ms, faster than 25.67% of C++ online submissions for Set Mismatch.
Memory Usage: 30.9 MB, less than 18.97% of C++ online submissions for Set Mismatch.
*/
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> um;
        int tmp1 = 0;
        int tmp2 = 0;
        for(int i = 0; i<nums.size(); i++) {
            um[i+1]++;
            um[nums[i]]++;
        }
        for(auto it:um) {
            if(it.second == 1) {
                tmp2 = it.first;
            }
            if(it.second == 3) {
                tmp1 = it.first;
            }
        }
        return {tmp1,tmp2};
    }
};