/*
Runtime: 8 ms, faster than 37.32% of C++ online submissions for Generate Parentheses.
Memory Usage: 19.1 MB, less than 10.07% of C++ online submissions for Generate Parentheses.
*/
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string parenthesis;
        backtracking(result,0,0,n,parenthesis);
        return result;
    }
private:
    void backtracking(vector<string> &result, int counter1, int counter2,int n,string parenthesis){
        if(counter1>n or counter2>n) return ;
        if(counter1==n and counter2==n) result.push_back(parenthesis);
        if(counter1 >= counter2){
            string newparenthesis = parenthesis;
            parenthesis+="(";
            newparenthesis+=")";
            backtracking(result,counter1+1,counter2,n,parenthesis);
            backtracking(result,counter1,counter2+1,n,newparenthesis);
        }
       return;
    }
    
};