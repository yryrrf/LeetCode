/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Add Digits.
Memory Usage: 6 MB, less than 24.95% of C++ online submissions for Add Digits.
*/
class Solution {
public:
    int addDigits(int num) {
        return (num - 1) % 9 + 1;
    }
};