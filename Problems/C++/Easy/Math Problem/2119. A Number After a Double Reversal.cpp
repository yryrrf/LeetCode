/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for A Number After a Double Reversal.
Memory Usage: 5.9 MB, less than 69.68% of C++ online submissions for A Number After a Double Reversal.
*/
class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num==0) return true;
        return num%10==0?false:true;
    }
};