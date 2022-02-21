/*
Runtime: 12 ms, faster than 27.24% of C++ online submissions for Arranging Coins.
Memory Usage: 5.9 MB, less than 70.50% of C++ online submissions for Arranging Coins.
*/
class Solution {
public:
    int arrangeCoins(int n) {
        int ans = 0;
        do{
            ans++;
            n-=ans;
        }while(n>0);
        return n<0?ans-1:ans;
    }
};
