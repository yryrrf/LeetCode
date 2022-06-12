/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Remove Duplicate Letters.
Memory Usage: 6.4 MB, less than 98.53% of C++ online submissions for Remove Duplicate Letters.
*/
class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> cnt(26,0);
        vector<int> app(26,0);
        string stk = "";
        for(char c:s) cnt[c-'a']++;
        for(char c:s){
            if(app[c-'a']==0){
                while(stk.size()>0 && cnt[stk[stk.size()-1]-'a']>0){
                    if(c<stk[stk.size()-1]){
                        app[stk[stk.size()-1]-'a'] = 0;
                        stk.pop_back();
                    }else{
                        break;
                    }
                }
                stk+=c;
                app[c-'a']=1;
            } 
            cnt[c-'a']--;
        }
        return stk;
    }
};