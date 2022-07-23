/*
Runtime: 162 ms, faster than 95.54% of C++ online submissions for Find All Groups of Farmland.
Memory Usage: 56.2 MB, less than 96.96% of C++ online submissions for Find All Groups of Farmland.
*/
class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>> ans;
        for(int i = 0; i<land.size(); i++) {
            for(int j = 0; j<land[0].size(); j++) {
                if(land[i][j]==1) ans.push_back(bfs(land,i,j));
            }
        }
        return ans;
    }
    
    vector<int> bfs(vector<vector<int>>& land, int i, int j) {
        int right = j;
        int bottom = i;
        int top = i;
        int left = j;
        while(right<land[0].size()-1 && land[i][right+1]==1) {
            land[i][right] = -1;
            right++;
        }
        while(bottom<land.size()-1 && land[bottom+1][j]==1) {
            land[bottom][j] = -1;
            bottom++;
        }
        for(; i<=bottom; i++) {
            for(j = left; j<=right; j++){
                land[i][j] = -1;
            }
        }
        return {top,left,bottom,right};
    }
};