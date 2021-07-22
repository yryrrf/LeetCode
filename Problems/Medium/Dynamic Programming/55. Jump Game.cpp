/*
Runtime: 56 ms, faster than 79.16% of C++ online submissions for Jump Game.
Memory Usage: 48.3 MB, less than 75.39% of C++ online submissions for Jump Game.
*/
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int step = 0;
        if(nums.size()==1) return true;
        for(int i = 0 ;i<nums.size();i++){
            step = max(step,nums[i]);
            nums[i] = step;
            step--;
        }

        
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==0 and i!=nums.size()-1) return false;
        }
        
        return true;
    }
};