/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for First Letter to Appear Twice.
Memory Usage: 6.3 MB, less than 25.00% of C++ online submissions for First Letter to Appear Twice.
*/
class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char, int> um;
        for(char c:s){
            um[c]++;
            if(um[c]==2) return c;
        }
        return ' ';
    }
};