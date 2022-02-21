/*
Runtime: 4 ms, faster than 90.26% of C++ online submissions for Triangle.
Memory Usage: 8.4 MB, less than 60.28% of C++ online submissions for Triangle.
*/
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        for(int i = 1; i<triangle.size(); i++){
            triangle[i][0] +=triangle[i-1][0];
            for(int j = 1; j<triangle[i].size()-1;j++){
                triangle[i][j] += min(triangle[i-1][j],triangle[i-1][j-1]);
            }
            triangle[i][triangle[i].size()-1] +=triangle[i-1][triangle[i].size()-2];
        }
        
        int minSum = INT_MAX;
        for(int j = 0; j < triangle[triangle.size()-1].size(); j++){
            minSum = min(minSum,triangle[triangle.size()-1][j]);
        }
        
        return minSum;
    }
};