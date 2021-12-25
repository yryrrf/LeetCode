/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for String to Integer (atoi).
Memory Usage: 7 MB, less than 51.54% of C++ online submissions for String to Integer (atoi).
*/
class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int ans = 0;
        int N = false;
        while(s[i]==' ') i++;
        
        if(s[i]=='-') N = true;
        if(s[i]=='+' || s[i]=='-') i++;
        for(; i< s.size(); i++){
            if(!(s[i]>='0' && s[i]<='9')){
                break;
            }
            int tmp = s[i]-'0';
            if(ans>INT_MAX/10 || (ans==INT_MAX/10 && tmp>7)){
                return N?INT_MIN:INT_MAX;
            }
            ans*=10;
            ans+=tmp;
        }
        return N?-ans:ans;
        
    }
};