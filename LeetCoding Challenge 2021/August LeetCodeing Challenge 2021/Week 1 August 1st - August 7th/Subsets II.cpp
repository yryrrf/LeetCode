/*
Runtime: 136 ms, faster than 6.95% of C++ online submissions for Subsets II.
Memory Usage: 41.2 MB, less than 5.46% of C++ online submissions for Subsets II.
*/
class Solution {
public:

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result={{}};
        sort(nums.begin(),nums.end());
        for(int i = 0; i<nums.size(); i++){
            int len = result.size();
            for(int j = 0; j < len; j++){
                vector<int> curr = result[j];
                curr.push_back(nums[i]);
                int count = 0;
                for(vector<int> num:result){
                    if(num == curr) break;
                    count++;
                }
                if(count == result.size()) result.push_back(curr);
            }
        }
        
        
        return result;
    }
};