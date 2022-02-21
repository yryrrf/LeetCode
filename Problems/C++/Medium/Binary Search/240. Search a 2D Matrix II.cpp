/*
Runtime: 104 ms, faster than 62.42% of C++ online submissions for Search a 2D Matrix II.
Memory Usage: 15 MB, less than 17.70% of C++ online submissions for Search a 2D Matrix II.
*/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix[0].size()-1;
        int m = 0;
        while(n>=0 and m<matrix.size()){
            if(matrix[m][n]==target) return true;
            if(matrix[m][n]>target){
                n--;
            }else{
                m++;
            }
        }
        return false;
    }
};