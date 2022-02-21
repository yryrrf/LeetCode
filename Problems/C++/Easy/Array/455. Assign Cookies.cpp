/*
Runtime: 28 ms, faster than 76.77% of C++ online submissions for Assign Cookies.
Memory Usage: 17.5 MB, less than 79.02% of C++ online submissions for Assign Cookies.
*/
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ans = 0;
        int gindex = 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        for(int i = 0; i<s.size(); i++){
            if(gindex==g.size()) break;
            if(s[i]>=g[gindex]){
                ans++;
                gindex++;
            }
        }
        return ans;
    }
};