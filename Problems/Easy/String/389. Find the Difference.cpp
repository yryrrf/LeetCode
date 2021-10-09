/*
Runtime: 6 ms, faster than 18.19% of C++ online submissions for Find the Difference.
Memory Usage: 6.7 MB, less than 67.30% of C++ online submissions for Find the Difference.
*/
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> um;
        for(char c:s){
            um[c]++;
        }
        for(char c:t){
            um[c]--;
            if(um[c]<0) return c;
        }
        return 'a';
    }
};