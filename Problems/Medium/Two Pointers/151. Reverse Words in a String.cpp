/*
Runtime: 4 ms, faster than 85.48% of C++ online submissions for Reverse Words in a String.
Memory Usage: 20.9 MB, less than 20.60% of C++ online submissions for Reverse Words in a String.
*/
class Solution {
public:
    string reverseWords(string s) {
        string result;
        string curr;
        
        for(int i = 0; i<s.size(); i++){
            if(s[i]!=' '){
                curr+=s[i];
            }else if(i>0 && s[i] == ' ' && s[i-1] == ' '){
                continue;
            }else{
                if(result.empty()){
                    result = curr;
                    curr = "";
                    continue;
                }
                result = curr + ' ' + result;
                curr = "";
            }
        }
        if(!curr.empty()){
            if(result.empty()) return curr;
            result = curr + ' ' + result;
        }
        
        return result;
    }
};