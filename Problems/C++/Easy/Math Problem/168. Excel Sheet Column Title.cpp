/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Excel Sheet Column Title.
Memory Usage: 5.9 MB, less than 77.02% of C++ online submissions for Excel Sheet Column Title.
*/
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;
        while(columnNumber>0){
            ans += (char)((--columnNumber)%26+'A');
            columnNumber/=26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};