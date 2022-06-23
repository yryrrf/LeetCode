/*
Runtime: 61 ms, faster than 43.71% of C++ online submissions for Set Mismatch.
Memory Usage: 21.4 MB, less than 85.28% of C++ online submissions for Set Mismatch.
*/
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int xorSum = 0;
        for(int i = 0; i<nums.size(); i++) {
            xorSum^=(i+1);
            xorSum^=nums[i];
        }
        int bit = xorSum&(-xorSum);
        int tmp1 = 0;
        int tmp0 = 0;
        for(int i = 0; i<nums.size() ; i++) {
            if(((i+1)&bit) == 0) {
                tmp0^=(i+1);
            }else {
                tmp1^=(i+1);
            }
            
            if((nums[i]&bit)==0) {
                tmp0^=nums[i];
            }else {
                tmp1^=nums[i];
            }
        }
        for(int num:nums) {
            if(tmp1==num) {
                return {tmp1,tmp0};
            }
        }
        
        return {tmp0,tmp1};
    }
};