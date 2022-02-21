/*
Runtime: 28 ms, faster than 32.94% of C++ online submissions for Longest Substring Without Repeating Characters.
Memory Usage: 10.9 MB, less than 22.27% of C++ online submissions for Longest Substring Without Repeating Characters.
*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> sset;
        int n = s.size();
        int ans=0;
        int index;
        for(int i = 0,j = 0;i<n;i++){
            if(i!=0) sset.erase(s[i-1]);
            while(j<n and !sset.count(s[j])){
                sset.insert(s[j]);
                j++;
            }
             ans = max(ans,(int)sset.size());
        }
        return ans;
    }
};