/*
Runtime: 10 ms, faster than 40.52% of C++ online submissions for Battleships in a Board.
Memory Usage: 8.1 MB, less than 52.40% of C++ online submissions for Battleships in a Board.
*/
class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int ans = 0;
        for(int i = 0; i< board.size(); i++){
            for(int j = 0; j<board[0].size(); j++){
                if(board[i][j]=='X'){
                    ans++;
                    clearShip(i, j, board);
                }
            }
        }
        return ans;
    }
    
    void clearShip(int x, int y, vector<vector<char>>& board){
        if(x>=0 && x<board.size() && y>=0 && y<board[0].size() && board[x][y]=='X'){
            board[x][y] = '.';
        }else{
            return;
        }
        clearShip(x+1,y,board);
        clearShip(x-1,y,board);
        clearShip(x,y+1,board);
        clearShip(x,y-1,board);
    }
    
};