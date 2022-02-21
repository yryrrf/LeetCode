/*
Runtime: 31 ms, faster than 18.41% of C++ online submissions for Valid Sudoku.
Memory Usage: 18.1 MB, less than 72.28% of C++ online submissions for Valid Sudoku.
*/
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[9][10] = {0};
        int col[9][10] = {0};
        int box[9][10] = {0};
        for(int i = 0; i<board.size(); i++){
            for(int j = 0; j<board[0].size(); j++){
                if(board[i][j] == '.') continue;
                if(row[i][board[i][j]-'0'] ==1) return false;
                if(col[j][board[i][j]-'0'] ==1) return false;
                if(box[j/3 + (i/3)*3][board[i][j]-'0'] ==1) return false;
                
                row[i][board[i][j]-'0'] = 1;
                col[j][board[i][j]-'0'] =1;
                box[j/3 + (i/3)*3][board[i][j]-'0'] =1;    
            }
        }
        return true;
    }    
};