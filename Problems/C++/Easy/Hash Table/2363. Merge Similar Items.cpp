/*
Runtime: 48 ms, faster than 100.00% of C++ online submissions for Merge Similar Items.
Memory Usage: 17.4 MB, less than 40.00% of C++ online submissions for Merge Similar Items.
*/
class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int> um;
        for(int i = 0; i<items1.size(); i++) {
            um[items1[i][0]]+=items1[i][1];
        }
        for(int i = 0; i<items2.size(); i++) {
            um[items2[i][0]]+=items2[i][1];
        }
        vector<vector<int>> ans;
        for(auto& it:um) {
            vector<int> tmp = {it.first, it.second};
            ans.emplace_back(tmp);
        }
        return ans;
    }
};