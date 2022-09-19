/*
Runtime: 3 ms, faster than 50.00% of C++ online submissions for Smallest Even Multiple.
Memory Usage: 6 MB, less than 50.00% of C++ online submissions for Smallest Even Multiple.
*/
class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%2==0) return n;
        return n*2;
    }
};