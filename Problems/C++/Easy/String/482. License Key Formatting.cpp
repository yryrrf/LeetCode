/*
Runtime: 11 ms, faster than 62.81% of C++ online submissions for License Key Formatting.
Memory Usage: 8.4 MB, less than 47.21% of C++ online submissions for License Key Formatting.
*/
class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int cnt = 0;
        string ans = "";
        for(int i = s.size()-1; i>=0; i--) {
            if(s[i]=='-') continue;
            
            if(cnt==k) {
                ans+='-';
                cnt = 0;
            }
            ans+=(s[i]>='a' && s[i]<='z')?s[i]-'a'+'A':s[i];
            cnt++;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};