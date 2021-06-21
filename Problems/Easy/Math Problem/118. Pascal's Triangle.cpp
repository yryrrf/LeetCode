/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Pascal's Triangle.
Memory Usage: 6.3 MB, less than 87.91% of C++ online submissions for Pascal's Triangle.
*/
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for(int i = 0;i<numRows;i++){
            vector<int> row(i+1,1);
            for(int j = 1; j<i;j++){
                row[j] = result[i-1][j]+result[i-1][j-1];
            }
            result.push_back(row);       
        }
        return result;
    }
};