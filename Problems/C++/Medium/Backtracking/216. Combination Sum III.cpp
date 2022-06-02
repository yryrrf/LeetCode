/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Combination Sum III.
Memory Usage: 6.6 MB, less than 46.35% of C++ online submissions for Combination Sum III.
*/
class Solution {
public:
    vector<int> tmp;
    vector<vector<int>> ans;
    vector<vector<int>> combinationSum3(int k, int n) {
        dfs(1,n,0,k);
        return ans;
    }
    
    void dfs(int nextNum, int target,int value, int n){
        if(tmp.size()>n || value>target || nextNum>10) return;
        if(tmp.size()==n && value==target){
            ans.push_back(tmp);
            return;
        }
        tmp.push_back(nextNum);
        dfs(nextNum+1,target,value+nextNum,n);
        tmp.pop_back();
        dfs(nextNum+1,target,value,n);
    }
};