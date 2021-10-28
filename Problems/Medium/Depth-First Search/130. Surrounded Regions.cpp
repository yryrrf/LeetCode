/*
Runtime: 8 ms, faster than 98.72% of C++ online submissions for Surrounded Regions.
Memory Usage: 9.9 MB, less than 92.51% of C++ online submissions for Surrounded Regions.
*/
class Solution {
public:
    void solve(vector<vector<char>>& board) {
        for(int i = 0; i<board.size(); i++){
            if(board[i][0]=='O') turnAll(i,0,board);
            if(board[i][board[0].size()-1]=='O') turnAll(i,board[0].size()-1,board);
        }
        
        for(int j = 0; j<board[0].size(); j++){
            if(board[0][j]=='O') turnAll(0,j,board);
            if(board[board.size()-1][j]=='O') turnAll(board.size()-1,j,board);
        }
        
        for(int i = 0; i<board.size(); i++){
            for(int j = 0; j<board[0].size(); j++){
                if(board[i][j]=='O'){
                    board[i][j] = 'X';
                }else if(board[i][j]=='1'){
                    board[i][j] = 'O';
                }
            }
        }
        
        
    }
    
    void turnAll(int y, int x, vector<vector<char>>& board){
        if(x<0 || x>=board[0].size() || y<0 || y>=board.size()){
            return;
        }
        if(board[y][x]=='O'){
            board[y][x] = '1';
        }else{
            return;
        }
        turnAll(y+1, x,board);
        turnAll(y-1, x,board);
        turnAll(y, x+1,board);
        turnAll(y, x-1,board);
    }
};