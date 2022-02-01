/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Detect Capital.
Memory Usage: 6.1 MB, less than 20.25% of C++ online submissions for Detect Capital.
*/
class Solution {
public:
    bool detectCapitalUse(string word) {
        bool smallcap = true;
        if(word[0]>='A' && word[0]<='Z'){
            bool allcap = true;
            for(int i = 1; i<word.size();i++){
                if(word[i]>='a' && word[i]<='z'){
                    allcap = false;
                }
                if(word[i]>='A' && word[i]<='Z'){
                    smallcap = false;
                }
            }
            return allcap || smallcap;
        }else{
            for(int i = 0; i<word.size(); i++){
                if(word[i]>='A' && word[i]<='Z'){
                    smallcap = false;
                }

            }
        }
        return smallcap;
    }
};