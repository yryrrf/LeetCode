/*
Runtime: 575 ms, faster than 66.67% of C++ online submissions for Equal Row and Column Pairs.
Memory Usage: 24 MB, less than 100.00% of C++ online submissions for Equal Row and Column Pairs.
*/
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        unordered_map<int,long long> row;
        unordered_map<int,long long> col;
        for(int i = 0; i<grid.size(); i++) {
            row[i] = sum(grid[i]);
        }
        for(int j = 0; j<grid[0].size(); j++) {
            long long tmp = 0LL;
            for(int i = 0; i<grid.size(); i++) {
                tmp+=grid[i][j];
            }
            col[j] = tmp;
        }
        int ans = 0;
        for(auto it1:row) {
            for(auto it2:col) {
                if(it1.second == it2.second) {
                    bool add = true;
                    for(int tmp = 0; tmp<grid.size(); tmp++){
                        if(grid[it1.first][tmp] != grid[tmp][it2.first]) {
                            add = false;
                            break;
                        }
                    }
                    if(add) {
                        ans++;
                    }
                }
            }
        }
        return ans;
        
    }
    
    long long sum(vector<int>& v) {
        long long ans = 0LL;
        for(int i:v) ans+=i;
        return ans;
    }
};