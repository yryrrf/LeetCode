/*
Runtime: 3 ms, faster than 42.63% of C++ online submissions for Longest Happy String.
Memory Usage: 7.4 MB, less than 5.56% of C++ online submissions for Longest Happy String.
*/
class Solution {
public:
    string longestDiverseString(int a, int b, int c, char ca = 'a', char cb = 'b', char cc = 'c') {
        if(a>b) return longestDiverseString(b,a,c,cb,ca,cc);
        if(b>c) return longestDiverseString(a,c,b,ca,cc,cb);
        if(b==0) return string(min(2,c),cc);
        int cCnt = min(2,c), bCnt = c-cCnt>=b?1:0;
        return string(cCnt,cc) + string(bCnt, cb) + longestDiverseString(a,b-bCnt,c-cCnt,ca,cb,cc);
    }
};