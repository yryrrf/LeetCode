/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Letter Combinations of a Phone Number.
Memory Usage: 6.6 MB, less than 63.60% of C++ online submissions for Letter Combinations of a Phone Number.
*/
class Solution {
public:
    vector<string> dict = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> result;
    int n;
    string digits;
    void dfs(int index, string word){
        if(index==n){
            result.push_back(word);
            return;
        }
        for(int i = 0;i<dict[digits[index]-'0'].size();i++){
            word+=dict[digits[index]-'0'][i];
            dfs(index+1,word);
            word.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        n=digits.size();
        if(n==0) return result;
        this->digits=digits;
        dfs(0,"");
        return result;
    }
};