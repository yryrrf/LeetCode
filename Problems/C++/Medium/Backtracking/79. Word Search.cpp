/*
Runtime: 196 ms, faster than 71.87% of C++ online submissions for Word Search.
Memory Usage: 7.4 MB, less than 14.76% of C++ online submissions for Word Search.
*/
class Solution {
public:
    vector<vector<char>> board;
    string word;
    bool result = false;
    bool exist(vector<vector<char>>& board, string word) {
        this-> board = board;
        this-> word = word;
        for(int i = 0;i<board.size();i++){
            for(int j = 0;j<board[0].size();j++){
                backtracking(i,j,0);
                if(result==true) return true;
            }
        }
        return false;
    }
    
    void backtracking(int i,int j,int index){
        if(index == word.size()){
            result = true;
            return;
        }
        if(i<0 or j<0 or i>=board.size() or j>=board[0].size()) return;
        
        if(word[index]==board[i][j]){
            char pre = board[i][j];
            board[i][j] = '#';
            
            backtracking(i+1,j,index+1);
            backtracking(i,j+1,index+1);
            backtracking(i-1,j,index+1);
            backtracking(i,j-1,index+1);
            
            board[i][j] = pre;
        }
    }
};