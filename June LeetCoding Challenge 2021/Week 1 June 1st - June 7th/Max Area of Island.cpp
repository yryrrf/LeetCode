/*
Runtime: 40 ms
Memory Usage: 23.3 MB
You are here!
Your runtime beats 10.95 % of cpp submissions.
You are here!
Your memory usage beats 63.05 % of cpp submissions.
*/
class Solution {
public:
    vector<vector<int>>* grid;
    int m, n;
    
    int search(int x, int y){
        if(x>=n or y>=m or x<0 or y<0 or (*grid)[x][y]==0) return 0;
        
        (*grid)[x][y]=0;
        return 1+ search(x-1,y) + search (x,y-1) + search(x+1,y)+search(x,y+1);
        
    }
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        this->grid = &grid;
        int result;
        int maxSize = 0;
        m=grid[0].size();
        n=grid.size();
        
        
        for (int i=0;i<= grid.size();i++){
            for(int j=0;j<=grid[0].size();j++){
                result = search(i,j);
                maxSize = (result>maxSize)?result:maxSize;
            }
        }
        
        
     return maxSize;   
    }
    
};