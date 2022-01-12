/*
Runtime: 244 ms, faster than 53.07% of C++ online submissions for Check if Every Row and Column Contains All Numbers.
Memory Usage: 67.9 MB, less than 45.26% of C++ online submissions for Check if Every Row and Column Contains All Numbers.
*/
class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        unordered_set<int> rus;
        unordered_set<int> cus;
        for(int i = 0; i<n; i++){
            rus.clear();
            cus.clear();
            for(int j = 0; j<n; j++){
                if(rus.count(matrix[i][j])){
                    return false;
                }
                if(cus.count(matrix[j][i])) return false;
                rus.emplace(matrix[i][j]);
                cus.emplace(matrix[j][i]);
            }
        }
        return true;
    }
};
