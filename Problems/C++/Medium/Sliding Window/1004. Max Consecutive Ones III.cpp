/*
Runtime: 52 ms, faster than 76.68% of C++ online submissions for Max Consecutive Ones III.
Memory Usage: 55.5 MB, less than 22.10% of C++ online submissions for Max Consecutive Ones III.
*/
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxSize = 0;
        int result = 0;
        for(int i = 0,j=0;i<nums.size();i++){
          if(i!=0){
              if(nums[i-1]==0) k++;
              maxSize--;
          }  
            while(j<nums.size()){
                if(nums[j]==1){
                    j++;
                    maxSize++;
                }else if(nums[j]==0 and k>0){
                    maxSize++;
                    k--;
                    j++;
                }else{
                    break;
                }   
            }
            result = max(maxSize,result);
        }
        return result;
    }
};