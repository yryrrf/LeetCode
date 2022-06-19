/*
Runtime: 160 ms, faster than 56.61% of C++ online submissions for Maximum Number of Coins You Can Get.
Memory Usage: 53.4 MB, less than 91.91% of C++ online submissions for Maximum Number of Coins You Can Get.
*/
class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int picks = piles.size()/3;
        int ans = 0;
        for(int i = piles.size()-2; i>=picks; i-=2) {
            ans+=piles[i];
        }
        return ans;
    }
};