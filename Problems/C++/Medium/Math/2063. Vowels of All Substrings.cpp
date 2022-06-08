/*
Runtime: 58 ms, faster than 13.80% of C++ online submissions for Vowels of All Substrings.
Memory Usage: 11.1 MB, less than 22.06% of C++ online submissions for Vowels of All Substrings.
*/
class Solution {
public:
    long long countVowels(string word) {
        long long ans = 0;
        unordered_set<char> us = {'a','e','i','o','u'};
        for(int i = 0; i<word.size(); i++){
            if(us.count(word[i])) ans+=(long long) ((i+1)*(word.size()-i));
        }
        return ans;
    }
};
