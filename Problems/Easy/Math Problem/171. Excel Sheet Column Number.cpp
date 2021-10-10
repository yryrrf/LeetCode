/*
Runtime: 4 ms, faster than 43.20% of C++ online submissions for Excel Sheet Column Number.
Memory Usage: 6.1 MB, less than 26.07% of C++ online submissions for Excel Sheet Column Number.
*/
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res = 0;
        for(int i = 0; i<columnTitle.size(); i++){
            res += (columnTitle[i]-'A'+1)*(pow(26,columnTitle.size()-i-1));
        }
        return res;
    }
};