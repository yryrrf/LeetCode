/*
Runtime: 6 ms, faster than 93.82% of C++ online submissions for Longest Repeating Character Replacement.
Memory Usage: 7 MB, less than 85.83% of C++ online submissions for Longest Repeating Character Replacement.
*/
class Solution {
public:
    int characterReplacement(string s, int k) {
        int tmp = 0;
        int left = 0;
        int right = 0;
        vector<int> n(26,0);
        while(right<s.size()) {
            n[s[right]-'A']++;
            tmp = max(tmp, n[s[right]-'A']);
            if(right - left + 1 -tmp > k){
                n[s[left]-'A']--;
                left++;
            }
            right++;
        }
        return s.size()-left;
    }
};
