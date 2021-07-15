/*
Runtime: 124 ms, faster than 51.14% of C++ online submissions for Valid Triangle Number.
Memory Usage: 12.8 MB, less than 66.99% of C++ online submissions for Valid Triangle Number.
*/
class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int k;
        int result = 0;
        for(int i = 0 ;i<nums.size();i++){
            k=i+2;
            if(nums[i]==0) continue;
            for(int j = i+1;j<nums.size()-1;j++){
                while(k<nums.size() and nums[i]+nums[j]>nums[k]){
                    k++;
                }
                result += k-j-1;
            }
        }
        return result;
    }
};