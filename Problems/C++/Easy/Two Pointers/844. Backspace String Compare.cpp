/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Backspace String Compare.
Memory Usage: 6.1 MB, less than 97.27% of C++ online submissions for Backspace String Compare.
*/
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i = s.size()-1;
        int j = t.size()-1;
        int skipS = 0;
        int skipT = 0;
        while(i>=0 || j>=0){
            while(i>=0){
                if(s[i]=='#'){
                    skipS++;
                    i--;
                }else if(skipS){
                    i--;
                    skipS--;
                }else{
                    break;
                }
            }
            while(j>=0){
                if(t[j]=='#'){
                    skipT++;
                    j--;
                }else if(skipT){
                    j--;
                    skipT--;
                }else{
                    break;
                }
            }
            if(i>=0 && j>=0){
                if(s[i]!=t[j]) return false;
            }else{
                if(i>=0 || j>=0) return false;
            }
            i--;
            j--;
        }
        return true;
    }
};