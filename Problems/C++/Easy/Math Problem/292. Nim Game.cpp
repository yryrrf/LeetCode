/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Nim Game.
Memory Usage: 5.8 MB, less than 66.94% of C++ online submissions for Nim Game.
*/
class Solution {
public:
    bool canWinNim(int n) {
        return !(n%4==0);
    }
};