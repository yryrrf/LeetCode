/*
Runtime: 4 ms, faster than 75.44% of C++ online submissions for Permutations.
Memory Usage: 8 MB, less than 30.61% of C++ online submissions for Permutations.
*/
class Solution {
public:
    vector<int> nums;
    vector<vector<int>> result;
    vector<vector<int>> permute(vector<int>& nums) {
        this->nums = nums;
        vector<int> used = nums;
        vector<int> vec;
        backtracking(vec,used);
        return result;
    }
    
    void backtracking(vector<int>& vec,vector<int>& used){
        for(int i = 0;i<nums.size();i++){
            if(used[i]!=-11){
                vec.push_back(nums[i]);
                used[i]=-11;
                backtracking(vec, used);
                used[i]=nums[i];
                vec.pop_back();
            }
        }

        if(vec.size() == nums.size()) {
            result.push_back(vec);
            return;
        }
    }
};