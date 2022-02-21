/*
Runtime: 40 ms, faster than 36.10% of C++ online submissions for Maximal Rectangle.
Memory Usage: 11.8 MB, less than 77.46% of C++ online submissions for Maximal Rectangle.
*/
class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
         if(matrix.size()==0) return 0;
        vector<vector<int>> mat(matrix.size(),vector<int>(matrix[0].size(),0));
        for(int j=0; j<matrix[0].size(); j++){
            int count = 0;
            for(int i = 0; i<matrix.size(); i++){
                if(matrix[i][j]=='0'){
                    count = 0;
                    continue;
                }
                count++;
                mat[i][j]=count;
            }
        }        
        stack<int> stk;
        int maxSum = 0;
        
        for(int i = 0; i<mat.size(); i++){
            for(int j = 0; j<mat[0].size(); j++){
                while(!stk.empty() and mat[i][j]<mat[i][stk.top()] ){
                    int h = mat[i][stk.top()];
                    stk.pop();
                    int w = stk.empty()?j:j-stk.top()-1;
                    maxSum = max(maxSum,h*w);
                }
                stk.push(j);
            }
            while(!stk.empty()){
                int h = mat[i][stk.top()];
                stk.pop();
                int  w = stk.empty()?mat[0].size():mat[0].size()-stk.top()-1;
                maxSum = max(maxSum,h*w);
            }
            
        }
        
        return maxSum;
        
    }
};