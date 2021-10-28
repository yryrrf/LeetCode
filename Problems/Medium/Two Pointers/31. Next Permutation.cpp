/*
Runtime: 8 ms, faster than 35.45% of C++ online submissions for Next Permutation.
Memory Usage: 12 MB, less than 93.85% of C++ online submissions for Next Permutation.
*/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index = nums.size()-2;
        while(index>=0 && nums[index]>=nums[index+1]){
            index--;
        }
        
        if(index>=0){
            for(int i = nums.size()-1; i>index; i--){
                if(nums[i]>nums[index]){
                    swap(nums[index],nums[i]);
                    break;
                }
            }
        }   
        reverse(nums.begin()+index+1,nums.end());     
    }
};