/*
Runtime: 4 ms, faster than 70.51% of C++ online submissions for Maximum Number of Words You Can Type.
Memory Usage: 6.7 MB, less than 61.23% of C++ online submissions for Maximum Number of Words You Can Type.
*/
class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        bool canType = true;
        int ans = 0;
        for(int i = 0; i<text.size(); i++){
            if(text[i]==' ') {
                if(canType) ans++;
                canType = true;
                continue;
            }
            for(int j = 0; j<brokenLetters.size(); j++){
                if(text[i]==brokenLetters[j]) canType = false;
            }
        }
        if(canType) ans++;
        return ans;
    }
};