/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Maximum Number of Balloons.
Memory Usage: 6.7 MB, less than 45.06% of C++ online submissions for Maximum Number of Balloons.
*/
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> v(26,0); // b a l o n
        for(int i = 0; i<text.size(); i++) {
            v[text[i]-'a']++;
        }
        int ans = INT_MAX;
        ans = min(ans,v['b'-'a']);
        ans = min(ans,v[0]);
        ans = min(ans, v['l'-'a']/2);
        ans = min(ans, v['o'-'a']/2);
        ans = min(ans, v['n' - 'a']);
        return ans==INT_MAX?0:ans;
    }
};