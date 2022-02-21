/*
Runtime: 24 ms, faster than 77.72% of C++ online submissions for Longest Palindromic Substring.
Memory Usage: 23 MB, less than 45.16% of C++ online submissions for Longest Palindromic Substring.
*/
class Solution {
public:
    string s;
    string longestPalindrome(string s) {
        this-> s = s;
        string result = "";
        for(int i = 0; i<s.size(); i++){
            string palindromeone = isPalindrome(i,i);
            string palindrometwo = isPalindrome(i,i+1);
            if(palindromeone.size()>result.size()) result = palindromeone;
            if(palindrometwo.size()>result.size()) result = palindrometwo;
        }
        return result;
    }
    
    string isPalindrome(int left, int right) {
        while(left>=0 and right<s.size() and s[left]==s[right]){
            left--;
            right++;
        }
        
        return s.substr(left+1,right-1-left);
        
    }
    
};