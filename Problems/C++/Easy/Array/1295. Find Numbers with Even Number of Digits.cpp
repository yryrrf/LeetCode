/*
Runtime: 10 ms, faster than 34.44% of C++ online submissions for Find Numbers with Even Number of Digits.
Memory Usage: 9.8 MB, less than 83.63% of C++ online submissions for Find Numbers with Even Number of Digits.
*/
class Solution {
public:
    int checkDigit(int num){
        int ans = 0;
        while(num!=0){
            num/=10;
            ans++;
        }
        return ans;
    }
    
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i<nums.size(); i++){
            if(checkDigit(nums[i])%2==0){
                ans++;
            }
        }
        return ans;
    }
};