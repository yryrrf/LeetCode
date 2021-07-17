/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Rotate Image.
Memory Usage: 7.2 MB, less than 29.60% of C++ online submissions for Rotate Image.
*/
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        reverse(matrix.begin(),matrix.end()); 
        for(int i = 0;i<matrix.size();i++){
            for(int j = i+1;j<matrix[i].size();j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};