/*
Runtime: 8 ms, faster than 84.97% of C++ online submissions for Minimum Path Sum.
Memory Usage: 9.7 MB, less than 86.38% of C++ online submissions for Minimum Path Sum.
*/
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        for(int i = 1; i<grid.size(); i++) grid[i][0] += grid[i-1][0];
        
        for(int j = 1; j<grid[0].size(); j++) grid[0][j] += grid[0][j-1];
        
        for(int i = 1; i<grid.size(); i++){
            for(int j = 1; j<grid[0].size(); j++){
                grid[i][j] = min(grid[i][j] + grid[i-1][j], grid[i][j] + grid[i][j-1]);
            }
        }
        
        return grid[grid.size()-1][grid[0].size()-1];
    }
};