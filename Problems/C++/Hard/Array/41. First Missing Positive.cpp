/*
Runtime: 132 ms, faster than 50.41% of C++ online submissions for First Missing Positive.
Memory Usage: 83 MB, less than 26.06% of C++ online submissions for First Missing Positive.
*/
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i = 0;i<nums.size();i++){
            if(nums[i]<=0) nums[i] = nums.size()+1;
        }
        
        for(int i = 0;i<nums.size();i++){
            int index = abs(nums[i]);
            if(index<=nums.size()){         
                nums[index-1]  = -abs(nums[index-1]);
            }
        }
    
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>0) return i+1;
        }
        
        return nums.size()+1;
        
    }
};