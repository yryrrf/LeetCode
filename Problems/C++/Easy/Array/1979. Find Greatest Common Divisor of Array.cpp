/*
Runtime: 14 ms, faster than 22.25% of C++ online submissions for Find Greatest Common Divisor of Array.
Memory Usage: 12.3 MB, less than 100.00% of C++ online submissions for Find Greatest Common Divisor of Array.
*/
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxN = INT_MIN;
        int minN = INT_MAX;
        for(int num:nums){
            maxN = max(maxN, num);
            minN = min(minN, num);
        }
        int ans = 1;
        for(int i = 1; i<=minN; i++){
            if(minN%i==0 && maxN%i==0) ans = i;
        }
        return ans;
    }
};