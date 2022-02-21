/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Word Pattern.
Memory Usage: 6.4 MB, less than 81.85% of C++ online submissions for Word Pattern.
*/
class Solution {
public:
    int spaces = 0;
    string getNextWord(int index, string& s){
        string tmp = "";
        for(int i = index+1; i<s.size(); i++){
            if(s[i]==' ') {
                spaces++;
                break;
            }
            tmp+=s[i];
        }
        return tmp;
    }
    
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> um;
        int index = -1;
        for(char c:pattern){
            string tmp = getNextWord(index,s);
            if(!um.count(c)){
                for(auto it:um){
                    if(it.second==tmp) return false;
                }
                um[c] = tmp;

            }else if(um[c]!=tmp){
                return false;
            }
            index+=tmp.size()+1;          
        }
        if(index<s.size()) return false;
        if(spaces+1!=pattern.size()) return false;
        return true;
    }
};