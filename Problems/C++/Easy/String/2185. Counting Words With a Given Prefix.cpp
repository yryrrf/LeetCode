/*
Runtime: 19 ms, faster than 32.12% of C++ online submissions for Counting Words With a Given Prefix.
Memory Usage: 9.9 MB, less than 76.55% of C++ online submissions for Counting Words With a Given Prefix.
*/
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans = 0;
        for(int i = 0; i<words.size(); i++){
            ans++;
            for(int j = 0; j<pref.size(); j++){
                if(j>=words[i].size() || pref[j]!=words[i][j]){
                    ans--;
                    break;
                }
            }
        }
        return ans;
    }
};