/*
Runtime: 29 ms, faster than 48.64% of C++ online submissions for Jump Game II.
Memory Usage: 16.3 MB, less than 67.99% of C++ online submissions for Jump Game II.
*/
class Solution {
public:
    int jump(vector<int>& nums) {
        int maxPos = 0, result = 0, endPos = 0;
        for(int i = 0; i<nums.size()-1; i++){
            maxPos = max(maxPos,nums[i] + i);
            if(endPos == i){
                endPos = maxPos;
                result++;
            }
        }
        return result;
    }
};