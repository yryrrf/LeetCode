/*
Runtime: 318 ms, faster than 17.79% of C++ online submissions for Queue Reconstruction by Height.
Memory Usage: 11.8 MB, less than 80.23% of C++ online submissions for Queue Reconstruction by Height.
*/
class Solution {
public:
    static bool cmp(const vector<int>& a, const vector<int>& b){
        return a[0] > b[0] || (a[0] == b[0] && a[1] < b[1]);
    }
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(), cmp);
        vector<vector<int>> ans;
        for(vector<int>& person: people) {
            ans.insert(ans.begin() + person[1], person);
        }
        return ans;
    }
};
