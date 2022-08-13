/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Self Dividing Numbers.
Memory Usage: 6.5 MB, less than 25.15% of C++ online submissions for Self Dividing Numbers.
*/
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(;left<=right; left++) {
            if(isDivisible(left)) ans.emplace_back(left);
        }
        return ans;
    }
    
    bool isDivisible(int num) {
        int tmp = num;
        while(num>0) {
            if(num%10==0 || tmp%(num%10)) return false;
            num/=10;
        }
        return true;
    }
};