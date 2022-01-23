/*
Runtime: 19 ms, faster than 35.00% of C++ online submissions for Maximum Number of Words Found in Sentences.
Memory Usage: 10.8 MB, less than 7.55% of C++ online submissions for Maximum Number of Words Found in Sentences.
*/
class Solution {
public:
    int wordCount(string word){
        int cnt = 0;
        bool flag = true;
        for(char c:word){
            if(c!=' ' && flag){
                flag = false;
                cnt++;
            }
            if(c==' ') flag = true;
        }
        return cnt;
    }
    
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        for(string s:sentences){
            ans = max(wordCount(s),ans);
        }
        return ans;
    }
};