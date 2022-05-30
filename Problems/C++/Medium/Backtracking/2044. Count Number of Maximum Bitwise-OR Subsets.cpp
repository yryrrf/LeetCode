/*
Runtime: 20 ms, faster than 85.88% of C++ online submissions for Count Number of Maximum Bitwise-OR Subsets.
Memory Usage: 8.4 MB, less than 51.33% of C++ online submissions for Count Number of Maximum Bitwise-OR Subsets.
*/
class Solution {
public:
    int maxNum = 0, maxCnt = 0;
    
    int countMaxOrSubsets(vector<int>& nums) {
        dfs(nums,0,0);
        return maxCnt;
    }
    
    void dfs(vector<int>& nums,int pos, int currValue) {
        if(pos==nums.size()){
            if(currValue>maxNum){
                maxCnt = 1;
                maxNum = currValue;
            }else if(currValue == maxNum){
                maxCnt++;
            }
            return;
        }
        dfs(nums, pos+1, currValue | nums[pos]);
        dfs(nums, pos+1, currValue);
    }
};