/*
Backtracking
Runtime: 1792 ms, faster than 5.14% of C++ online submissions for Target Sum.
Memory Usage: 9.1 MB, less than 56.86% of C++ online submissions for Target Sum.
*/
class Solution {
public:
    int sum =  0;
    int size;
    vector<int> nums;
    int target;
    int findTargetSumWays(vector<int>& nums, int target) {
        this->nums = nums;
        this->target = target;
        size = nums.size();
        backtracking(0,true,0);
        backtracking(0,false,0);
        return sum;
    }
    
    void backtracking(int index,bool cal,int value){
        if(index == size) return;
        value += (cal)?nums[index]:-nums[index];
        if(value == target and index == size-1) {
            sum+=1;
            return;
        }
        backtracking(index+1,true,value);
        backtracking(index+1,false,value);
        
    }
    
};