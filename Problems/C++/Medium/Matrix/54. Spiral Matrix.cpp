/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Spiral Matrix.
Memory Usage: 6.9 MB, less than 28.38% of C++ online submissions for Spiral Matrix.
*/
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int top = 0,bottom = matrix.size()-1,left = 0,right = matrix[0].size()-1;
        
        while(top<=bottom and right>=left){
            for(int j = left; j<=right; j++){
                result.push_back(matrix[top][j]);
            }
            
            for(int i = top+1; i<=bottom; i++){
                result.push_back(matrix[i][right]);
            }
            if (left < right && top < bottom) {
                for(int j = right-1; j>=left; j--){
                    result.push_back(matrix[bottom][j]);
                }

                for(int i = bottom-1; i>top; i--){
                    result.push_back(matrix[i][left]);
                }
            }
            top++;
            left++;
            right--;
            bottom--;
        }
        return result;
    }
};