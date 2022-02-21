/*
Runtime: 27 ms, faster than 54.83% of C++ online submissions for Product of Array Except Self.
Memory Usage: 24.5 MB, less than 49.58% of C++ online submissions for Product of Array Except Self.
*/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left(nums.size());
        left[0] = 1;
        for(int i = 1; i<left.size(); i++){
            left[i] = left[i-1]*nums[i-1];
        }
        int right = 1;
        for(int i = nums.size()-1; i>=0; i--){
            int num = nums[i];
            nums[i] = left[i]*right;
            right*=num;
        }     
        return nums;
    }
};