/*
Runtime: 3 ms, faster than 75.00% of C++ online submissions for Minimum Cost of Buying Candies With Discount.
Memory Usage: 10.8 MB, less than 75.00% of C++ online submissions for Minimum Cost of Buying Candies With Discount.
*/
class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int cnt = 0;
        int ans = 0;
        for(int i = cost.size()-1; i>=0; i--){
            cnt++;
            if(cnt==3){
                cnt=0;
                continue;
            }
            ans+=cost[i];      
        }
        return ans;
    }
};