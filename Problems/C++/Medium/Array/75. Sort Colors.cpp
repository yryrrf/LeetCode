/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sort Colors.
Memory Usage: 8.4 MB, less than 21.97% of C++ online submissions for Sort Colors.
*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int,int> um;
        for(int num:nums){
            um[num]+=1;
        }
        int num=0;
        for(int i = 0;i<nums.size();i++){
            while(um[num]==0) {
                num++;
            }
            nums[i] = num;
            um[num]--;
        }
    }
};