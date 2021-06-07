/*
Although it is a easy question, it should be considered of overflow.
Runtime: 4 ms, faster than 42.07% of C++ online submissions for Reverse Integer.
Memory Usage: 5.9 MB, less than 26.99% of C++ online submissions for Reverse Integer.
*/
class Solution {
public:
    int reverse(int x) {
        int result = 0;
        x = (x%10==0)?x/10:x;
        while(x!=0){
            if (result > INT_MAX/10 || (result == INT_MAX / 10 && x%10 > 7)) return 0;
            if (result < INT_MIN/10 || (result == INT_MIN / 10 && x%10 < -8)) return 0;
            result = result*10 + x%10;         
            x/=10;
        }
        return result;
    }
};