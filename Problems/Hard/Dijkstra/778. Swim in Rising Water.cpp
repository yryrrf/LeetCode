/*
Runtime: 20 ms, faster than 60.89% of C++ online submissions for Swim in Rising Water.
Memory Usage: 8.9 MB, less than 68.24% of C++ online submissions for Swim in Rising Water.
*/
class Solution {

public:
    int swimInWater(vector<vector<int>>& grid) {
        int cx = 0, cy = 0, tx = grid.size()-1, ty = grid[0].size()-1, result = 0;
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> q;
        q.push({0,{0,0}});
        while(cx!=tx or cy!=ty){
            auto data = q.top();
            while(grid[data.second.first][data.second.second] == -1 ){
                q.pop();
                data = q.top();
            }
            cx = data.second.first, cy = data.second.second;
            result = max(grid[data.second.first][data.second.second],result);
			//right
            if(cy<ty and grid[cx][cy+1]!=-1) q.push({(grid[cx][cy+1]<grid[cx][cy])?0:grid[cx][cy+1],{cx,cy+1}});
            //down
			if(cx<tx and grid[cx+1][cy]!=-1) q.push({(grid[cx+1][cy]<grid[cx][cy])?0:grid[cx+1][cy],{cx+1,cy}});
            //left
			if(cy>0 and grid[cx][cy-1]!=-1) q.push({(grid[cx][cy-1]<grid[cx][cy])?0:grid[cx][cy-1],{cx,cy-1}});
            //up
			if(cx>0 and grid[cx-1][cy]!=-1) q.push({(grid[cx-1][cy]<grid[cx][cy])?0:grid[cx-1][cy],{cx-1,cy}});
            
            grid[cx][cy] = -1;
        }
        return result;
    }
    
};