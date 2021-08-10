/*
Runtime: 28 ms, faster than 22.13% of C++ online submissions for Flip String to Monotone Increasing.
Memory Usage: 11 MB, less than 24.25% of C++ online submissions for Flip String to Monotone Increasing.
*/
class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int ans = INT_MAX;
        int total = 0;
        
        for(char c:s) if(c=='1') total++;
        int count = 0;
        
        for(int i = 0; i<=s.size(); i++){
            int time = s.size()-i-(total-count)+count;
            ans = min(time,ans);
            if(s[i] == '1') count++;
        }
        
        return ans;
    }
};