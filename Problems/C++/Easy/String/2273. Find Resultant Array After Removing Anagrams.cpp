/*
Runtime: 15 ms, faster than 60.03% of C++ online submissions for Find Resultant Array After Removing Anagrams.
Memory Usage: 12.4 MB, less than 49.83% of C++ online submissions for Find Resultant Array After Removing Anagrams.
*/
class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<int> isDeleted(words.size(),0);
        vector<string> ans;
        for(int i = words.size()-1; i>0; i--){
            if(isAnagram(words[i],words[i-1])){
                isDeleted[i] = 1;
            }
            if(!isDeleted[i]) ans.push_back(words[i]);
        }
        if(!isDeleted[0]) ans.push_back(words[0]);
        reverse(ans.begin(),ans.end());
        return ans;
    }
    
    bool isAnagram(const string& s1, const string& s2){
        if(s1.size()!=s2.size()) return false;
        int a1[26] = {0};
        int a2[26] = {0};
        for(int i = 0; i<s1.size(); i++){
            a1[s1[i]-'a']++;
            a2[s2[i]-'a']++;
        }
        for(int i = 0; i<26;i++){
            if(a1[i]!=a2[i]) return false;
        }
        
        return true;
    }
};