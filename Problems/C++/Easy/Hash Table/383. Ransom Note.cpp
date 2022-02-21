/*
Runtime: 20 ms, faster than 51.47% of C++ online submissions for Ransom Note.
Memory Usage: 8.8 MB, less than 38.94% of C++ online submissions for Ransom Note.
*/
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> um;
        if(ransomNote.size()>magazine.size()) return false;
        for(int i = 0; i<magazine.size(); i++){
            um[magazine[i]]++;
        }
        for(int i = 0; i<ransomNote.size(); i++){
            if(!um.count(ransomNote[i]) || um[ransomNote[i]]<=0) return false;
            um[ransomNote[i]]--;
        }
        return true;
    }
};