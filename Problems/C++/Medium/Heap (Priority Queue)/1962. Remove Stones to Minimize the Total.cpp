/*
Runtime: 558 ms, faster than 94.20% of C++ online submissions for Remove Stones to Minimize the Total.
Memory Usage: 105 MB, less than 30.04% of C++ online submissions for Remove Stones to Minimize the Total.
*/
class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        int ans = 0;
        for(int pile:piles) {
            ans+=pile;
            pq.emplace(pile);
        }
        while(k>0) {
            int tmp = pq.top();
            ans -= (tmp/2);
            pq.emplace(tmp - tmp/2);
            pq.pop();
            k--;
        }
        return ans;
    }
};