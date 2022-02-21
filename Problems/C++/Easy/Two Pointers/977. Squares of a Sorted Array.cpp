/*
Runtime: 34 ms, faster than 44.27% of C++ online submissions for Squares of a Sorted Array.
Memory Usage: 25.9 MB, less than 53.37% of C++ online submissions for Squares of a Sorted Array.
*/
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0, j = nums.size()-1, p = nums.size()-1;
        vector<int> ans(nums.size());
        for(; i<=j; ){
            if(pow(nums[i],2) < pow(nums[j],2)){  
                ans[p--] = pow(nums[j],2);
                j--;
            }else{
                ans[p--] = pow(nums[i],2);            
                i++;
            }
        }
        return ans;
    }
};