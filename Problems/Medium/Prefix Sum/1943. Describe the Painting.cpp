/*
Runtime: 749 ms, faster than 21.05% of C++ online submissions for Describe the Painting.
Memory Usage: 112.7 MB, less than 26.32% of C++ online submissions for Describe the Painting.
*/
class Solution {
public:
    vector<vector<long long>> splitPainting(vector<vector<int>>& segments) {
        unordered_map<int,long long> um;
        for(int i = 0; i<segments.size();i++){
            if(!um.count(segments[i][0])) um[segments[i][0]] = 0;
            um[segments[i][0]]+=segments[i][2];
            if(!um.count(segments[i][1])) um[segments[i][1]] = 0;
            um[segments[i][1]]-=segments[i][2];
        }
        vector<pair<int,long long>> tmp;
        for(auto it:um) tmp.emplace_back(it.first,it.second);
        sort(tmp.begin(),tmp.end());
        vector<vector<long long>> ans;
        long long color = 0;
        for(int i = 0 ; i<tmp.size()-1; i++){
            color+=tmp[i].second;
            if(color){
                ans.emplace_back(vector<long long>{tmp[i].first, tmp[i+1].first,color});
            }
        }
        return ans;
    }
};