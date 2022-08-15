/*
Runtime: 24 ms, faster than 71.43% of C++ online submissions for Largest Local Values in a Matrix.
Memory Usage: 11.2 MB, less than 14.29% of C++ online submissions for Largest Local Values in a Matrix.
*/
class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>> ans(grid.size()-2, vector<int>(grid[0].size()-2));
        for(int i = 1; i<grid.size()-1; i++) {
            for(int j = 1; j<grid[0].size()-1; j++) {
                ans[i-1][j-1] = getLargest(i, j, grid);
            }
        }
        return ans;
    }
    
    int getLargest(int ci, int cj, vector<vector<int>>& grid) {
        int ans = INT_MIN;
        for(int i = ci-1; i<=ci+1; i++) {
            for(int j = cj-1; j<=cj+1; j++) {
                ans = max(ans, grid[i][j]);
            }
        }
        return ans;
    }
};