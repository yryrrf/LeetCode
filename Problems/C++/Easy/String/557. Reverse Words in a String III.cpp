/*
Runtime: 23 ms, faster than 23.50% of C++ online submissions for Reverse Words in a String III.
Memory Usage: 13.3 MB, less than 19.29% of C++ online submissions for Reverse Words in a String III.
*/
class Solution {
public:
    string reverseWords(string s) {
       string tmp="";
        string ans;
        for(int i = 0; i<s.size(); i++){
           if(s[i]==' '){
               reverse(tmp.begin(),tmp.end());
               ans+=tmp+" ";
               tmp="";
               continue;
           }
            tmp+=s[i];
       } 
        if(tmp!=""){
            reverse(tmp.begin(),tmp.end());
            ans+=tmp;
        }
        return ans;
    }
};