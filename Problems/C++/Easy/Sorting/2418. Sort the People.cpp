/*
Runtime: 44 ms, faster than 75.00% of C++ online submissions for Sort the People.
Memory Usage: 22.2 MB, less than 91.67% of C++ online submissions for Sort the People.
*/
bool cmp(const pair<string,int>& a, const pair<string,int>& b) {
    return a.second > b.second;
}
class Solution {
public:
    
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string,int>> v;
        for(int i = 0; i<names.size(); i++) {
            v.emplace_back(names[i],heights[i]);
        }
        sort(v.begin(), v.end(), cmp);
        for(int i = 0; i<names.size(); i++) {
            names[i] = v[i].first;
        }
        return names;
    }
};