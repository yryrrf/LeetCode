/*
Runtime: 8 ms, faster than 83.33% of C++ online submissions for Min Max Game.
Memory Usage: 9.9 MB, less than 58.33% of C++ online submissions for Min Max Game.
*/
class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        while(nums.size()!=1){
            vector<int> array(nums.size()/2);
            for(int i= 0;i<nums.size();i+=2){
                if(i/2%2==1) array[i/2] = max(nums[i],nums[i+1]); 
                else array[i/2] = min(nums[i],nums[i+1]);
            }
            nums = array;
        }
        return nums[0];
    }
};