/*
Runtime: 7 ms, faster than 99.23% of C++ online submissions for Destination City.
Memory Usage: 10.4 MB, less than 91.22% of C++ online submissions for Destination City.
*/
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> us;
        for(int i = 0; i<paths.size(); i++) {
            if(!us.count(paths[i][0])) us.insert(paths[i][0]);
        }
        string ans = "";
        for(int i = 0;i<paths.size(); i++) {
            if(!us.count(paths[i][1])) return paths[i][1];
        }
        return ans;
    }
};