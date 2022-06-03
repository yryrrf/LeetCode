/*
Runtime: 20 ms, faster than 9.03% of C++ online submissions for Find First and Last Position of Element in Sorted Array.
Memory Usage: 13.5 MB, less than 98.25% of C++ online submissions for Find First and Last Position of Element in Sorted Array.
*/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = nums.size();
        int last = -1;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == target){
                first = min(first,i);
                last = max(last,i);
            }else if(nums[i]>target){
                break;
            }
        }
        vector<int> ans(2,-1);
        if(first<nums.size()) ans[0] = first;
        if(last>-1) ans[1] = last;
        return ans;
    }
};