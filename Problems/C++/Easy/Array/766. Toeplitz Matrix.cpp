/*
Runtime: 27 ms, faster than 35.50% of C++ online submissions for Toeplitz Matrix.
Memory Usage: 17.5 MB, less than 66.46% of C++ online submissions for Toeplitz Matrix.
*/
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for(int i = matrix.size()-1; i>=0; i--) {
            int tmp = matrix[i][0];
            for(int j = 0, idx = i; idx<matrix.size() && j<matrix[0].size(); idx++, j++){
                if(matrix[idx][j] != tmp) return false;
            }
        }
        for(int j = 1; j<matrix[0].size(); j++) {
            int tmp = matrix[0][j];
            for(int i = 0, j_ = j; i<matrix.size() && j_<matrix[0].size(); i++, j_++){
                if(matrix[i][j_]!=tmp) return false;
            }
        }
        return true;
    }
    
};