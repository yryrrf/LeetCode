/*
Runtime: 566 ms, faster than 9.43% of C++ online submissions for Rotating the Box.
Memory Usage: 52.5 MB, less than 80.99% of C++ online submissions for Rotating the Box.
*/
class Solution {
public:
    void moveDown(vector<vector<char>>& ans, int i, int j){
        if(i+1>=ans.size()) return;
        if(ans[i][j]!='#' || ans[i+1][j]!='.') return;
        ans[i][j] = '.';
        ans[i+1][j] = '#';
        moveDown(ans, i+1, j);
    }
    
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        vector<vector<char>> ans(box[0].size(),vector<char>(box.size()));
        for(int i = 0; i<box.size(); i++){
            for(int j = 0; j<box[0].size(); j++){
                ans[j][ans[0].size()-i-1] = box[i][j];
            }
        }
        for(int i = ans.size()-1; i>=0; i--){
            for(int j = ans[0].size()-1; j>=0; j--){
                moveDown(ans, i, j);
            }
        }
        
        return ans;
    }
};
