/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Find Common Characters.
Memory Usage: 9.4 MB, less than 61.81% of C++ online submissions for Find Common Characters.
*/
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> freq(26,INT_MAX);
        vector<int> tmp(26,0);
        for(string word: words){
            fill(tmp.begin(), tmp.end(), 0);
            for(char c: word){
                tmp[c-'a']++;
            }
            for(int i = 0 ; i<26; i++){
                freq[i] = min(freq[i],tmp[i]);
            }
        }
        vector<string> ans;
        for(int i = 0; i<freq.size(); i++){
            while(freq[i]>0){
                ans.emplace_back(1,i+'a');
                freq[i]--;
            }
        }
        return ans;
    }
};