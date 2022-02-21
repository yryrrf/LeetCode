/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Number of 1 Bits.
Memory Usage: 5.9 MB, less than 48.17% of C++ online submissions for Number of 1 Bits.
*/
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0;
        while(n>0){
            ans+=n%2?1:0;
            n = n>>1;
        }
        return ans;
    }
};