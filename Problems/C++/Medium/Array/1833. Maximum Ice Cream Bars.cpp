/*
Runtime: 144 ms, faster than 99.56% of C++ online submissions for Maximum Ice Cream Bars.
Memory Usage: 76.6 MB, less than 26.95% of C++ online submissions for Maximum Ice Cream Bars.
*/
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int ans = 0;
        for(int i = 0; i<costs.size(); i++){
            if(costs[i]<=coins){
                ans++;
                coins-=costs[i];
            }else{
                break;
            }
        }
        return ans;
    }
};