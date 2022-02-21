/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Nth Digit.
Memory Usage: 5.7 MB, less than 98.13% of C++ online submissions for Nth Digit.
*/
class Solution {
public:
    int findNthDigit(int n) {
        int digitCnt = 1;
        int len = 1;
        while(n>(long long) 9*digitCnt*len){
            n-= 9*digitCnt*len;
            digitCnt*=10;
            ++len;
        }
        int ans = 0;
        int num = (n-1)/len + digitCnt;
        for(int i =(n-1)%len; i<len; i++){
            ans = num%10;
            num/=10;
        }
        return ans;
    }
};