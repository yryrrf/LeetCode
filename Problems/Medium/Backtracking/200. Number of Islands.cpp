/*
Runtime: 12 ms, faster than 94.94% of C++ online submissions for Number of Islands.
Memory Usage: 9.8 MB, less than 40.78% of C++ online submissions for Number of Islands.
*/
class Solution {
public:
    vector<vector<char>> grid;
    int count = 0;
    int numIslands(vector<vector<char>>& grid) {
        this->grid = grid;
        for(int i = 0; i<grid.size(); i++){
           for(int j = 0; j<grid[0].size(); j++){
               if(this->grid[i][j] == 'X' or grid[i][j] == '0') continue;
               search(i,j);
               count++;
           }
       } 
        return count;
    }
    
    void search(int i, int j){
        if(i>=grid.size() or i<0)  return;
        if(j>=grid[0].size() or j<0) return;
        if(grid[i][j] == 'X') return;
        if(grid[i][j] == '1'){
            grid[i][j] = 'X';
            search(i+1,j);
            search(i-1,j);
            search(i,j+1);
            search(i,j-1);
        }else{
            return;
        }
    }
    
};