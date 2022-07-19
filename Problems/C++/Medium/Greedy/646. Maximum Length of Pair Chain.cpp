/*
Runtime: 107 ms, faster than 78.55% of C++ online submissions for Maximum Length of Pair Chain.
Memory Usage: 22.6 MB, less than 72.89% of C++ online submissions for Maximum Length of Pair Chain.
*/
class Solution {
public:
    static bool cmp(const vector<int>& a, const vector<int>& b) {
        return (a[1]==b[1] && a[0]<b[0]) || a[1]<b[1];
    }
    
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(),cmp);
        int curr = pairs[0][1], ans = 1;
        for(int i = 1; i<pairs.size(); i++) {
            if(curr<pairs[i][0]) {
                curr = pairs[i][1];
                ans++;
            }
        }
        return ans;
    }
};