/*
Runtime: 4 ms, faster than 96.89% of C++ online submissions for Permutation in String.
Memory Usage: 7.3 MB, less than 72.17% of C++ online submissions for Permutation in String.
*/
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        vector<int> cnt(26,0);
        for(char c : s1) cnt[c-'a']++;
        int p1 = 0;
        for(int i = 0; i<s2.size(); i++){
            cnt[s2[i]-'a']--;
            while(cnt[s2[i]-'a']<0){
                cnt[s2[p1]-'a']++;
                p1++;
            }
            if(i-p1+1==s1.size()) return true;
        }
        return false;
    }
};