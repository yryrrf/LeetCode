/*
Runtime: 60 ms, faster than 43.66% of C++ online submissions for Diagonal Traverse.
Memory Usage: 21.4 MB, less than 24.91% of C++ online submissions for Diagonal Traverse.
*/
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        bool rev = false;
        for(int i = 0; i<mat.size(); i++) {
            addOrder(ans,i,0,rev,mat);
            rev = !rev;
        }
        for(int j = 1; j<mat[0].size(); j++) {
            addOrder(ans, mat.size()-1, j, rev, mat);
            rev = !rev;
        }
        return ans;
    }
    
    void addOrder(vector<int>& ans, int i, int j, bool rev, vector<vector<int>>& mat) {
        vector<int> tmp;
        while(i<mat.size() && j<mat[0].size()) {
            tmp.emplace_back(mat[i][j]);
            i--;
            j++;
        }
        if(rev)
            ans.insert(ans.end(), tmp.rbegin(), tmp.rend());
        else
            ans.insert(ans.end(),tmp.begin(),tmp.end());
    }
};