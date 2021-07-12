/*
Runtime: 16 ms, faster than 12.47% of C++ online submissions for Isomorphic Strings.
Memory Usage: 7 MB, less than 68.67% of C++ online submissions for Isomorphic Strings.
*/
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> um1;
        unordered_map<char,char> um2;
        for(int i = 0;i<s.size();i++){
            if(um1.count(s[i])!=um2.count(t[i]) or (um1.count(s[i]) and um1[s[i]]!=t[i]) or (um2.count(t[i]) and um2[t[i]]!=s[i])){
                return false;
            }
            um1[s[i]] = t[i];
            um2[t[i]] = s[i];
        }
        return true;
    }
};