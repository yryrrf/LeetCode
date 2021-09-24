/*
Runtime: 4 ms, faster than 89.85% of C++ online submissions for Combination Sum II.
Memory Usage: 12.9 MB, less than 26.91% of C++ online submissions for Combination Sum II.
*/
class Solution {
public:
    vector<vector<int>> ans;
    vector<pair<int,int>> freq;
    vector<int> vec;
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        for(int num : candidates){
            if(freq.empty() || num!=freq.back().first){
                freq.emplace_back(num,1);
            }else{
                ++freq.back().second;
            }
        }
        dfs(0,target);
        return ans;
        
    }
    
    void dfs(int index, int curr){
        if(curr == 0) ans.push_back(vec);
        if(index == freq.size() || freq[index].first>curr) return;
        
        dfs(index+1,curr);
        int maxIndex = min(curr/freq[index].first,freq[index].second);
        
        for(int i = 0; i<maxIndex; i++){
            vec.push_back(freq[index].first);
            dfs(index+1,curr-freq[index].first*(i+1));
        }
        
        for(int i = 0; i<maxIndex; i++){
            vec.pop_back();
        }
    }
    
};