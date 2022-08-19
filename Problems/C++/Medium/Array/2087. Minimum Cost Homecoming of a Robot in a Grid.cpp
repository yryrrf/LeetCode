/*
Runtime: 299 ms, faster than 54.19% of C++ online submissions for Minimum Cost Homecoming of a Robot in a Grid.
Memory Usage: 149.8 MB, less than 73.60% of C++ online submissions for Minimum Cost Homecoming of a Robot in a Grid.
*/
class Solution {
public:
    
    int minCost(vector<int>& startPos, vector<int>& homePos, vector<int>& rowCosts, vector<int>& colCosts) {
        int i = startPos[0];
        int j = startPos[1];
        int ans = 0;
        while(i!=homePos[0]) {
            i += (homePos[0]-i)/abs(homePos[0]-i);
            ans+=rowCosts[i];
        }
        
        while(j!=homePos[1]) {
            j += (homePos[1]-j)/abs(homePos[1]-j);
            ans+=colCosts[j];
        }
        
        return ans;
    }
};