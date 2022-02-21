/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Count and Say.
Memory Usage: 6.3 MB, less than 96.26% of C++ online submissions for Count and Say.
*/
class Solution {
public:
    string countAndSay(int n) {
        string ans = "1";
        string tmp;
        for(int i = 2; i<=n; i++){
            tmp = ans;
            ans="";
            char cache=tmp[0];
            int cnt=1;
            for(int i = 1; i<tmp.size(); i++){
                if(cache!=tmp[i]){
                    ans+=(char)(cnt+'0');
                    ans+=cache;
                    cache = tmp[i];
                    cnt = 1;
                }else{
                    cnt++;
                }
            }
            
            if(cnt>0){
                ans+=(char)(cnt+'0');
                ans+=cache;
            }
            
        }
        return ans;
    }
};
