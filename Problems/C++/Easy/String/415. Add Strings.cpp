/*
Runtime: 43 ms, faster than 10.39% of C++ online submissions for Add Strings.
Memory Usage: 56.1 MB, less than 10.80% of C++ online submissions for Add Strings.
*/
class Solution {
public:
    string addStrings(string num1, string num2) {
        int n = min(num1.size(),num2.size());
        int m = max(num1.size(),num2.size());
        int add = 0;
        if(num1.size()>num2.size()){
            string tmp = num1;
            num1 = num2;
            num2 = tmp;
        }
        string ans="";
        for(int i = m-1; i>=m-n;i--){
            int tmp = (num1[i - (m-n)]-'0' + num2[i]-'0')+add;
            ans = (char)(tmp%10+'0')+ans;
            add = tmp/10;
        }
        for(int i = m-n-1; i>=0; i--){
            int tmp = (num2[i]-'0') + add;
            ans = (char)(tmp%10+'0') + ans;
            add = tmp/10;
        }
        if(add) ans = (char)(add+'0') + ans;
        return ans;
    }
};
