/*
Runtime: 43 ms, faster than 36.81% of C++ online submissions for The Skyline Problem.
Memory Usage: 14.4 MB, less than 85.40% of C++ online submissions for The Skyline Problem.
*/
class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        auto cmp = [](const pair<int,int>& a, const pair<int,int>& b)->bool{return a.second < b.second;};
        priority_queue<pair<int,int>,vector<pair<int,int>>, decltype(cmp)> pq(cmp);
        vector<int> boundaries;
        for(vector<int> building:buildings){
            boundaries.emplace_back(building[0]);
            boundaries.emplace_back(building[1]);
        }
        sort(boundaries.begin(),boundaries.end());
        
        vector<vector<int>> result;
        int index = 0;
        for(int boundary:boundaries){
            while(index<buildings.size() && buildings[index][0]<=boundary){
                pq.emplace(buildings[index][1],buildings[index][2]);
                index++;
            }
            while(!pq.empty() && pq.top().first<=boundary){
                pq.pop();
            }
            int maxHeight = pq.empty()?0:pq.top().second;
            if(result.size()==0 or maxHeight!=result.back()[1]){
                result.push_back({boundary,maxHeight});
            }
        }
        
        return result;
    }
};