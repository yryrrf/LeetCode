/*
Runtime: 40 ms, faster than 50.61% of C++ online submissions for Group Anagrams.
Memory Usage: 20.8 MB, less than 36.16% of C++ online submissions for Group Anagrams.
*/
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> um;
        for(string s:strs){
            string sortS = s;
            sort(sortS.begin(),sortS.end());
            um[sortS].emplace_back(s);
        }
        vector<vector<string>> ans;
        for(auto& it:um){
            vector<string> tmp;
            for(string s:it.second){
                tmp.emplace_back(s);
            }
            ans.emplace_back(tmp);
        }
        return ans;
    }
};