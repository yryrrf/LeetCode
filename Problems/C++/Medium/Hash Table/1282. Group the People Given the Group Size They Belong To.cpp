/*
Runtime: 8 ms, faster than 92.90% of C++ online submissions for Group the People Given the Group Size They Belong To.
Memory Usage: 12.5 MB, less than 97.97% of C++ online submissions for Group the People Given the Group Size They Belong To.
*/
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int,vector<int>> um;
        vector<vector<int>> result;
        for(int i = 0;i<groupSizes.size();i++){
            um[groupSizes[i]].push_back(i);
            if(um[groupSizes[i]].size()==groupSizes[i]){
                result.push_back(um[groupSizes[i]]);
                um[groupSizes[i]].clear();
            }
        }
        return result;
    }
};