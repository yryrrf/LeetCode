/*
Runtime: 3 ms, faster than 83.16% of C++ online submissions for Cells in a Range on an Excel Sheet.
Memory Usage: 7.8 MB, less than 66.54% of C++ online submissions for Cells in a Range on an Excel Sheet.
*/
class Solution {
public:
    vector<string> cellsInRange(string s) {
        int alphaStart = s[0]-'A';
        int alphaEnd = s[3]-'A';
        int nStart = s[1]-'0';
        int nEnd = s[4]-'0';
        vector<string> ans;
        for(int i = alphaStart; i<=alphaEnd; i++) {
            for(int j = nStart; j<=nEnd; j++) {
                char tmp1 = (i+'A');
                char tmp2 =   (j+'0');
                string tmp3 ="";
                tmp3+=tmp1;
                tmp3+=tmp2;
                ans.push_back(tmp3);
            }
        }
        return ans;
    }
};