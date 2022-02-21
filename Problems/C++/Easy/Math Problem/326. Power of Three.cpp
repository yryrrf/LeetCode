/*
Runtime: 31 ms, faster than 43.38% of C++ online submissions for Power of Three.
Memory Usage: 5.9 MB, less than 73.73% of C++ online submissions for Power of Three.
*/
class Solution {
public:
    bool isPowerOfThree(int n) {
        while(n>0 && n%3==0){
            n/=3;
        }
        return n==1;
    }
};