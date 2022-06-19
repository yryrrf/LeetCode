/*
Runtime: 3 ms, faster than 40.75% of C++ online submissions for Thousand Separator.
Memory Usage: 5.9 MB, less than 55.82% of C++ online submissions for Thousand Separator.
*/
class Solution {
public:
    string thousandSeparator(int n) {
        string ans = "";
        int cnt = 0;
        if(n==0) return "0";
        while(n>0) {
            if(cnt==3) {
                ans+=".";
                cnt = 0;
            }
            ans+=to_string(n%10);
            cnt++;
            n/=10;
        }
        if(ans[0] == '.') ans.substr(1,ans.size()-1);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};