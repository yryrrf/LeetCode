/*
Runtime: 284 ms, faster than 93.43% of C++ online submissions for Count Nodes With the Highest Score.
Memory Usage: 128.3 MB, less than 68.43% of C++ online submissions for Count Nodes With the Highest Score.
*/
class Solution {
public:
    int n;
    long long maxScore = 0;
    int ans;
    int countHighestScoreNodes(vector<int>& parents) {
        n = parents.size();
        vector<vector<int>> children(n);
        for(int i = 1; i<n; i++) {
            children[parents[i]].emplace_back(i);
            
        }

        dfs(children, 0);
        return ans;
    }
    
    int dfs(vector<vector<int>>& children, int node) {
        long long score = 1;
        int size = 1;
        for(int& child:children[node]) {
            int tmp = dfs(children, child);
            score*=tmp;
            size+=tmp;
        }
        
        if(node) score*=n-(size);
        
        if(maxScore==score) ans++;
        else if(maxScore<score) {
            maxScore = score;
            ans = 1;
        }
        
        return size;
    }
};