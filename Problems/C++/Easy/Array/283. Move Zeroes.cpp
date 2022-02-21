/*
Runtime: 8 ms, faster than 37.03% of C++ online submissions for Move Zeroes.
Memory Usage: 9 MB, less than 58.25% of C++ online submissions for Move Zeroes.
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt = 0;
        for(int i = 0; i<nums.size();i++){
            if(nums[i]==0 and i<nums.size()-cnt){
                nums.erase(nums.begin()+i);
                cnt++;
                nums.push_back(0);
                i--;
            }
        }
    }
};