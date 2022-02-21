/*
Runtime: 16 ms, faster than 55.22% of C++ online submissions for Word Break.
Memory Usage: 13.2 MB, less than 43.14% of C++ online submissions for Word Break.
*/
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool> dp(s.size()+1);
        unordered_set<string> wordDictSet;
        for(string word : wordDict){
            wordDictSet.insert(word);
        }
        dp[0] = true;
        
        for(int i = 1 ; i <= s.size() ; i++){
            for(int j = 0 ; j < i ; j++){
                if(dp[j] and wordDictSet.find(s.substr(j,i-j))!=wordDictSet.end()){
                    dp[i] = true;
                }
            }
            
        }
        return dp[s.size()];
        
    }
};