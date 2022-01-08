/*
Runtime: 17 ms, faster than 15.02% of C++ online submissions for Valid Anagram.
Memory Usage: 7.3 MB, less than 77.42% of C++ online submissions for Valid Anagram.
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> um;
        if(s.size()!=t.size()) return false;
        for(int i = 0; i<s.size();i++){
            if(!um.count(s[i])){
                um[s[i]] = 1;
            }else{
                um[s[i]]++;
            }
        }
        
        for(int i = 0; i<t.size(); i++){
            if(!um.count(t[i])){
                return false;
            }else{
                um[t[i]]--;
            }
        }
        for(auto it:um){
            if(it.second!=0) return false;
        }
        
        return true;
    }
};