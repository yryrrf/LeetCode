/*
Runtime: 240 ms, faster than 80.79% of C++ online submissions for Partition Array According to Given Pivot.
Memory Usage: 135.3 MB, less than 26.03% of C++ online submissions for Partition Array According to Given Pivot.
*/
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> before;
        vector<int> after;
        int equalTime = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]==pivot){
                equalTime++;
            }else if(nums[i]<pivot){
                before.push_back(nums[i]);
            }else{
                after.push_back(nums[i]);
            }
        }
        vector<int> ans;
        for(int n:before){
            ans.push_back(n);
        }
        while(equalTime>0){
            ans.push_back(pivot);
            equalTime--;
        }
        for(int n:after){
            ans.push_back(n);
        }
        return ans;
    }
};