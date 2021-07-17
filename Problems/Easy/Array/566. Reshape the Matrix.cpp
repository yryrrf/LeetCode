/*
Runtime: 12 ms, faster than 53.29% of C++ online submissions for Reshape the Matrix.
Memory Usage: 10.7 MB, less than 82.31% of C++ online submissions for Reshape the Matrix.
*/
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(mat.size()*mat[0].size() != r*c ) return mat;
        vector<vector<int>> result(r,vector<int>(c,0));
        int m = 0;
        int n = 0;
        for(int i = 0;i<r;i++){
            for(int j = 0;j<c;j++){
                if(n==mat[0].size()) {
                    n=0;
                    m++;
                }
                result[i][j]= mat[m][n];
                n++;
            }
        }
        return result;
    }
};