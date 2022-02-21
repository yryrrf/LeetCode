/*
Runtime: 4 ms, faster than 95.51% of C++ online submissions for How Many Numbers Are Smaller Than the Current Number.
Memory Usage: 10.6 MB, less than 13.68% of C++ online submissions for How Many Numbers Are Smaller Than the Current Number.
*/
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int,int> data;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(!data.count(nums[i])){
                data[nums[i]]=i;
            }
        }
        vector<int> result = nums;
        sort(result.rbegin(),result.rend());
        
        for(int i = 0;i<result.size();i++){
            data[result[i]]=result.size()-i-1;
        }
        
        for(int i= 0;i<n;i++){
            nums[i] = data[nums[i]];
        }
        return nums;
    }
};