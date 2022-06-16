/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sum of Two Integers.
Memory Usage: 5.9 MB, less than 73.51% of C++ online submissions for Sum of Two Integers.
*/
class Solution {
public:
    int getSum(int a, int b) {
        while(b!=0){
            unsigned int carry = (unsigned int)(a&b)<<1;
            a ^=b;
            b = carry;
        }
        return a;
    }
};