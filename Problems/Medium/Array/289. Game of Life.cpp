/*
Runtime: 3 ms, faster than 19.92% of C++ online submissions for Game of Life.
Memory Usage: 8.9 MB, less than 5.07% of C++ online submissions for Game of Life.
*/
class Solution {
public:
    int getNeighbours(int i, int j, vector<vector<int>> board){
        int cnt = 0;
        for(int m = i-1; m<i+2; m++){
            for(int n = j-1; n<j+2; n++){
                if(m<0 || n<0 || m>=board.size() || n>=board[0].size()){
                    continue;
                }
                if(m==i && n==j){
                    continue;
                }
                if(board[m][n]==1){
                    cnt++;
                }
            }
        }
        return cnt;
    }
    
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> vc(board.size(),vector<int>(board[0].size()));
        for(int i = 0; i<board.size(); i++){
            for(int j = 0; j<board[0].size(); j++){
                vc[i][j] = getNeighbours(i,j,board);
            }
        }
        
       for(int i = 0; i<board.size(); i++){
            for(int j = 0; j<board[0].size(); j++){
                if(board[i][j]==1){
                    if(vc[i][j]!=2 && vc[i][j]!=3) board[i][j]=0;
                }else{
                    if(vc[i][j]==3){
                        board[i][j]=1;
                    }
                }
            }
        }
    }
    
};