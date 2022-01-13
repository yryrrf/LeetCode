/*
Runtime: 4 ms, faster than 91.58% of C++ online submissions for Letter Case Permutation.
Memory Usage: 12.2 MB, less than 13.58% of C++ online submissions for Letter Case Permutatio
*/
class Solution {
public:
    vector<string> ans;
    int strSize;
    vector<string> letterCasePermutation(string s) {
        strSize = s.size();
        if(strSize==0) return {};
        if(s[0]>='0' && s[0]<='9'){
            backtracking(s,0,true,"");
        }else{
            backtracking(s,0,true,"");
            backtracking(s,0,false,"");
        }
        
        return ans;
    }
    
    void backtracking(string& s,int index, bool uppercase, string curr){
        if(index==strSize) {
            ans.push_back(curr);
            return;
        }
        string word ="";
        if(s[index]>='0' && s[index]<='9'){
            word += s[index];
        }
        else if(uppercase){
            if(s[index]>='a' && s[index]<='z'){
                word+= s[index]-'a'+'A';
            }else{
                word+=s[index];
            }
        }else{
            if(s[index]>='A' && s[index]<='Z'){
                word+= s[index]-'A'+'a';
            }else{
                word+=s[index];
            }
        }
        
        if(index+1==strSize){
            ans.push_back(curr+word);
            return;
        }else if(s[index+1]>='0' && s[index+1]<='9'){
            backtracking(s,index+1,true, curr+word);
            return;
        }
        backtracking(s,index+1,true, curr+word);
        backtracking(s,index+1,false,curr+word);
    }
};