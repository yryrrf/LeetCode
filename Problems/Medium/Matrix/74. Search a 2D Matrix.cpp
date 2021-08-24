/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Search a 2D Matrix.
Memory Usage: 9.6 MB, less than 5.33% of C++ online submissions for Search a 2D Matrix.
*/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int startIndex=0;
        for(int i = 0; i<matrix.size(); i++){
            if(matrix[i][0]<=target){
                startIndex = i;
            }else{
                break;
            }
        }
        
        for(int j = 0; j<matrix[0].size(); j++){
            if(matrix[startIndex][j]==target) return true;
        }

        return 0;
    }
};