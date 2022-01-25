/*
Runtime: 132 ms, faster than 54.53% of C++ online submissions for Convert 1D Array Into 2D Array.
Memory Usage: 89.9 MB, less than 45.29% of C++ online submissions for Convert 1D Array Into 2D Array.
*/
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> vec(m,vector<int>(n));
        if(original.size()!=m*n) return {};
        int size = original.size();
        for(int j = 0; j<size;j++){
            vec[j/n][j%n] = original[j];
        }
        return vec;
    }
};
