/*
Runtime: 19 ms, faster than 52.08% of C++ online submissions for Implement strStr().
Memory Usage: 7.4 MB, less than 22.30% of C++ online submissions for Implement strStr().
*/
class Solution {
public:
    int strStr(string haystack, string needle) {
        vector<int> match(needle.size());
        if(needle.size()==0) return 0;
        
        for(int i = 1, j=0; i<needle.size(); i++){
            while(j>0 and needle[i] != needle[j]){
                j = match[j - 1];
            }
            if(needle[i]==needle[j]) j++;
            
            match[i] = j;
        }
        
        for(int i = 0, j = 0; i<haystack.size(); i++){
            while(j>0 and haystack[i]!=needle[j]){
                j=match[j-1];
            }
            if(haystack[i] == needle[j]) j++;
            if(j==needle.size()) return i-j+1;
        }
        
        return -1;
    }
};