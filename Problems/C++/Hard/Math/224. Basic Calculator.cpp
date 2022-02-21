/*
Runtime: 13 ms, faster than 43.24% of C++ online submissions for Basic Calculator.
Memory Usage: 8.1 MB, less than 67.37% of C++ online submissions for Basic Calculator.
*/
class Solution {
public:
    int calculate(string s) {
        stack<int> stk;
        int sign = 1;
        int ans = 0;
        stk.push(1);
        for(int i = 0; i<s.size(); i++){
            if(s[i]==' '){
                continue;
            }else if(s[i]=='+'){
                sign = stk.top();
            }else if(s[i]=='-'){
                sign = stk.top()*-1;
            }else if(s[i]=='('){
                stk.push(sign);
            }else if(s[i]==')'){
                stk.pop();
            }else{
                long num = 0;
                while(i<s.size() && s[i]<='9' && s[i]>='0'){
                    num = num*10 + s[i] - '0';
                    i++;
                }
                i--;
                ans+=num*sign;
            }
        }
        return ans;
    }
};