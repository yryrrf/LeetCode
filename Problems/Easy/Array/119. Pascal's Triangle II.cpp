/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Pascal's Triangle II.
Memory Usage: 6.5 MB, less than 32.74% of C++ online submissions for Pascal's Triangle II.
*/
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> row(rowIndex+1);
        for(int i = 0; i<row.size(); i++){
            row[i].resize(i+1);
            row[i][0] = 1;
            row[i][i] = 1;
            for(int j  = 1; j<i; j++){
                row[i][j] = row[i-1][j] + row[i-1][j-1];
            }
        }
        return row[row.size()-1];
    }
};
