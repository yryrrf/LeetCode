/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Create Target Array in the Given Order.
Memory Usage: 8.5 MB, less than 36.17% of C++ online submissions for Create Target Array in the Given Order.
*/
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> result;
        for(int i = 0; i <index.size();i++){
            result.insert(result.begin()+index[i], nums[i]);
        }
        return result;
    }
};