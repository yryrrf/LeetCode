/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Minimum Moves to Reach Target Score.
Memory Usage: 5.8 MB, less than 73.63% of C++ online submissions for Minimum Moves to Reach Target Score.
*/
class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        if(target==1) return 0;
        if(maxDoubles == 0) return target-1;
        int ans = 0;
        if(target%2) {
            ans = minMoves(target-1, maxDoubles) +1;
        } else {
            ans = minMoves(target/2, maxDoubles-1)+1;
        }
        return ans;
    }
};