/*
Runtime: 12 ms, faster than 85.61% of C++ online submissions for Set Matrix Zeroes.
Memory Usage: 13.3 MB, less than 55.02% of C++ online submissions for Set Matrix Zeroes.
*/
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        bool col0 = false;
        for (int i = 0; i < m; i++) {
                if (!matrix[i][0]) col0 = true;
            
            for (int j = 1; j < n; j++) {  
                if(!matrix[i][j]) matrix[i][0] = matrix[0][j] = 0;
            }
        }
        
        for(int i = m-1; i>=0; i--){
            for(int j = 1; j < n; j++){
                if(!matrix[i][0] or !matrix[0][j]) matrix[i][j] = 0;
            }
            if(col0) matrix[i][0] = 0;
        }
        
    }
};