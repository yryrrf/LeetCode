/*
Runtime: 26 ms, faster than 39.32% of C++ online submissions for Reverse String.
Memory Usage: 23.2 MB, less than 41.96% of C++ online submissions for Reverse String.
*/
class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i = 0, j=s.size()-1; i<j;i++,j--){
            char c = s[j];
            s[j] = s[i];
            s[i] = c;
        }
    }
};