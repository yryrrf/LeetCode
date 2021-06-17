/*
Runtime: 8 ms, faster than 51.73% of C++ online submissions for Shuffle the Array.
Memory Usage: 9.8 MB, less than 57.60% of C++ online submissions for Shuffle the Array.
*/
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;
        for (int i = 0; i<n;i++){
            result.push_back(nums[i]);
            result.push_back(nums[n+i]);
        }
        return result;
    }
};