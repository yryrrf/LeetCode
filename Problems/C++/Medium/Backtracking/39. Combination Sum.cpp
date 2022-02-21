/*
Runtime: 472 ms, faster than 5.06% of C++ online submissions for Combination Sum.
Memory Usage: 108.6 MB, less than 5.03% of C++ online submissions for Combination Sum.
*/
class Solution {
public:
    vector<vector<int>> result;
    int target;
    vector<int> candidates;
    int size;
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        this->target = target;
        this->candidates = candidates;
		
        size = candidates.size();
		
        for(int i = 0 ; i < size ; i++){
            backtracking(candidates[i],{candidates[i]},i);
        }
        
        return result;
    }
    
    
    void backtracking(int sum,vector<int> curr,int index){
        if(sum == target) {
            result.push_back(curr);
            return;
        }
        if(index==size) return;
        backtracking(sum,curr,index+1);
        
        if(sum<target){
            curr.push_back(candidates[index]);
            backtracking(sum+candidates[index],curr,index);
            curr.pop_back();
        }
        
    }
    
};