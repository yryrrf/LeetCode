/*
Runtime: 7 ms, faster than 89.30% of C++ online submissions for Sudoku Solver.
Memory Usage: 6.7 MB, less than 22.52% of C++ online submissions for Sudoku Solver.
*/
class Solution {
public:
    vector<pair<int,int>> emptyCell;
    bool valid = false;
    vector<vector<bool>> row{9, vector<bool>(9,false)};
    vector<vector<bool>> col{9,vector<bool>(9,false)};
    vector<vector<vector<bool>>> box{3,vector<vector<bool>>(3,vector<bool>(9,false))};
    
    void dfs(vector<vector<char>>& board, int pos){
        if(pos==emptyCell.size()) {
            valid = true;
            return;
        }
        auto [i,j] = emptyCell[pos];
        for(int n = 1; n<=9 && !valid; n++){
            if(!row[i][n-1] && !col[j][n-1] && !box[i/3][j/3][n-1] ){
                row[i][n-1] = col[j][n-1] = box[i/3][j/3][n-1] = true;
                board[i][j] = n+'0';
                dfs(board, pos+1);
                row[i][n-1] = col[j][n-1] = box[i/3][j/3][n-1] = false;
            }
        }
    }
    

    void solveSudoku(vector<vector<char>>& board) {
        for(int i = 0; i<board.size(); i++){
            for(int j = 0; j<board[0].size(); j++){
                if(board[i][j]=='.'){
                    emptyCell.push_back({i,j});
                }else{
                    int num = board[i][j] -'0' -1;
                    row[i][num] = col[j][num] = box[i/3][j/3][num] = true;
                }
            }
        }
        dfs(board, 0);
        
    }
};