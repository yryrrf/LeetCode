/*
Runtime: 486 ms, faster than 32.31% of C++ online submissions for Minimum Operations to Make a Uni-Value Grid.
Memory Usage: 86.1 MB, less than 54.39% of C++ online submissions for Minimum Operations to Make a Uni-Value Grid.
*/
class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> v;
        for(int i = 0; i<grid.size(); i++) {
            for(int j = 0; j<grid[0].size(); j++) {
                v.push_back(grid[i][j]);
            }
        }
        sort(v.begin(), v.end());
        int ans = 0;
        int med = v[v.size()/2];
        for(int i = 0; i<v.size(); i++) {
            if(i>0 && (v[i]-v[i-1])%x!=0) return -1;
            ans+=(abs(med-v[i])/x);
        }
        return ans;
    }
};