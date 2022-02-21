/*
Runtime: 444 ms, faster than 13.15% of C++ online submissions for Combinations.
Memory Usage: 164.9 MB, less than 11.60% of C++ online submissions for Combinations.
*/
class Solution {
public:
    int n;
    int k;
    vector<vector<int>> result;
    
    vector<vector<int>> combine(int n, int k) {
        this->n = n;
        this->k = k;
        backtracking(1,{});
        return result;
    }
    
    void backtracking(int num, vector<int> curr){
        if(curr.size()==k){
            result.push_back(curr);
            return;
        }
        for(num; num<=n; num++){
            curr.push_back(num);
            backtracking(num+1,curr);
            curr.pop_back();
        }
    }
};