/*
Runtime: 66 ms, faster than 79.68% of C++ online submissions for Find First Palindromic String in the Array.
Memory Usage: 26.2 MB, less than 17.06% of C++ online submissions for Find First Palindromic String in the Array.
*/
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string word:words) {
            if(isPalindromic(word)) return word;
        }
        return "";
    }
    
    bool isPalindromic(string s) {
        for(int i = 0; i<s.size()/2; i++) {
            if(s[i]!=s[s.size()-1-i]) return false;
        }
        return true;
    }
};