/*
Runtime: 3 ms, faster than 41.88% of C++ online submissions for Solve the Equation.
Memory Usage: 6.2 MB, less than 5.63% of C++ online submissions for Solve the Equation.
*/
class Solution {
public:
    string solveEquation(string equation) {
        vector<vector<int>> vec(2,vector<int>(2,0));
        int idx = 0;
        int i = 0;
        int sign = 1;
        while(i<equation.size()) {
            if(equation[i] == '='){
                idx++;
                sign = 1;
            }else if(equation[i]=='+') {
                sign = 1;
            }else if(equation[i] == '-') {
                sign = -1;
            }else if(equation[i] == 'x'){
                vec[idx][0] += sign;
            }else{
                string tmp = "";
                while(i<equation.size() && equation[i]!='+' && equation[i]!='-' && equation[i]!='=') {
                    tmp+=equation[i];
                    i++;
                }
                if(equation[i]=='+' || equation[i]=='-' || equation[i]=='=') i--;
                if(tmp[tmp.size()-1]=='x') {
                    tmp = tmp.substr(0,tmp.size()-1);
                    vec[idx][0]+=stoi(tmp)*sign;
                }else{
                    vec[idx][1] +=stoi(tmp)*sign;
                }
                
            }
            i++;
        }
        int ans = 0;
        int sum = vec[0][1] - vec[1][1];

        int x = vec[1][0] - vec[0][0];
        if(x==0) {
            if(sum!=0) return "No solution";
            return "Infinite solutions";
        }
        ans = sum/x;

        return "x="+to_string(ans);
    }
};

