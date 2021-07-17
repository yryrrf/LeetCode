/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Remove Element.
Memory Usage: 8.8 MB, less than 31.97% of C++ online submissions for Remove Element.
*/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for (int i = nums.size()-1; i >= 0;i--){
            if(nums[i]!=val){
                k++;
            }else{
                nums.erase(nums.begin()+i);
            }
        }
        return k;
    }
};