/*
Runtime: 11 ms, faster than 18.81% of C++ online submissions for Min Cost Climbing Stairs.
Memory Usage: 13.7 MB, less than 77.51% of C++ online submissions for Min Cost Climbing Stairs.
*/
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        for(int i = 2; i<cost.size(); i++){
            cost[i] += min(cost[i-1],cost[i-2]);
        }
        return min(cost[cost.size()-1],cost[cost.size()-2]);
    }
};