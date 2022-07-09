/*
Runtime: 473 ms, faster than 14.81% of C++ online submissions for Array With Elements Not Equal to Average of Neighbors.
Memory Usage: 128.2 MB, less than 25.74% of C++ online submissions for Array With Elements Not Equal to Average of Neighbors.
*/
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int tmp = (nums.size()+1)>>1;
        vector<int> ans;
        for(int i = 0; i<tmp; i++) {
            ans.push_back(nums[i]);
            if(tmp+i<nums.size()) ans.push_back(nums[i+tmp]);
        }
        return ans;
    }
};