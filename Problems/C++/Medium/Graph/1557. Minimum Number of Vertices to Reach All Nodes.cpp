/*
Runtime: 544 ms, faster than 24.32% of C++ online submissions for Minimum Number of Vertices to Reach All Nodes.
Memory Usage: 109 MB, less than 18.20% of C++ online submissions for Minimum Number of Vertices to Reach All Nodes.
*/
class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> ans;
        unordered_set<int> us;
        for(int i = 0; i<edges.size(); i++) {
            us.emplace(edges[i][1]);
        }
        for(int i = 0; i<n; i++) {
            if(!us.count(i)) ans.emplace_back(i);
        }
        return ans;
    }
};