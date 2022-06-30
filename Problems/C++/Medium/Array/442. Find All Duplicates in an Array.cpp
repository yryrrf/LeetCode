/*
Runtime: 81 ms, faster than 66.73% of C++ online submissions for Find All Duplicates in an Array.
Memory Usage: 33.7 MB, less than 48.47% of C++ online submissions for Find All Duplicates in an Array.
*/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0; i<nums.size(); i++) {
            int tmp = abs(nums[i]);
            if(nums[tmp-1]>0) {
                nums[tmp-1] *= -1;
            }else{
                ans.push_back(tmp);
            }
        }
        return ans;
    }
};