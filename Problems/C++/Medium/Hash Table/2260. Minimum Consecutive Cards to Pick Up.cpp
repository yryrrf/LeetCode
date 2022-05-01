/*
Runtime: 373 ms, faster than 40.00% of C++ online submissions for Minimum Consecutive Cards to Pick Up.
Memory Usage: 115.1 MB, less than 40.00% of C++ online submissions for Minimum Consecutive Cards to Pick Up.
*/
class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,int> um;
        int ans = INT_MAX;
        for(int i = 0; i<cards.size(); i++){
            if(!um.count(cards[i])){
                um[cards[i]] = i;
            }else{
                ans = min(ans,i-um[cards[i]]+1);
                um[cards[i]]=i;
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};