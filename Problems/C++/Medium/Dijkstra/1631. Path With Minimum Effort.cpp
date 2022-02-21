/*
Runtime: 140 ms, faster than 82.30% of C++ online submissions for Path With Minimum Effort.
Memory Usage: 20.4 MB, less than 66.07% of C++ online submissions for Path With Minimum Effort.
*/

class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int cx = 0, cy = 0, tx = heights.size()-1, ty = heights[0].size()-1, result = 0;
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> q;
        q.push({0,{0,0}});
        while(cx!=tx or cy!=ty){
            auto data = q.top();
            while(heights[data.second.first][data.second.second] == -1 ){
                q.pop();
                data = q.top();
            }
            cx = data.second.first, cy = data.second.second;
            result = max(data.first,result);
			//right
            if(cy<ty and heights[cx][cy+1]!=-1) q.push({abs(heights[cx][cy+1] - heights[cx][cy]),{cx,cy+1}});
            //down
			if(cx<tx and heights[cx+1][cy]!=-1) q.push({abs(heights[cx+1][cy]-heights[cx][cy]),{cx+1,cy}});
            //left
			if(cy>0 and heights[cx][cy-1]!=-1) q.push({abs(heights[cx][cy-1]-heights[cx][cy]),{cx,cy-1}});
            //up
			if(cx>0 and heights[cx-1][cy]!=-1) q.push({abs(heights[cx-1][cy]-heights[cx][cy]),{cx-1,cy}});
            
            heights[cx][cy] = -1;
        }
        return result;
    }
};