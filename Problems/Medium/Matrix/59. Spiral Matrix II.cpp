/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Spiral Matrix II.
Memory Usage: 6.7 MB, less than 17.92% of C++ online submissions for Spiral Matrix II.
*/
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n,vector<int>(n,0));
        int count = 0;
        int i = 0, j=0;
        matrix[i][j] = 1;
        while(matrix[i][j]<n*n){
            
            for(++j; j<matrix[0].size() and matrix[i][j]==0; j++){
                matrix[i][j] = matrix[i][j-1] + 1;
            }
            j--;
            for(++i; i<matrix.size() and matrix[i][j]==0; i++){
                matrix[i][j] = matrix[i-1][j] + 1 ;
            }
            i--;
            for(--j; j>=0 and matrix[i][j] == 0; j--){
                matrix[i][j] = matrix[i][j+1] + 1;
            }
            j++;
            for(--i; i>=0 and matrix[i][j] == 0; i--){
                matrix[i][j] = matrix[i+1][j] + 1;
            }
            i++;
            count++;
        }
            return matrix;
    }

};
