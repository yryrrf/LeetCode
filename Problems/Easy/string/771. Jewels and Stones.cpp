/*Runtime: 0 ms, faster than 100.00% of C++ online submissions for Jewels and Stones.
Memory Usage: 6.1 MB, less than 69.32% of C++ online submissions for Jewels and Stones.
*/
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans=0;
        for(int i = 0;i<jewels.size();i++){
            ans+=count(stones.begin(),stones.end(),jewels[i]);
        }
        return ans;
    }
};