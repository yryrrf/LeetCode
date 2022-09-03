/*
Runtime: 4 ms, faster than 65.30% of C++ online submissions for Different Ways to Add Parentheses.
Memory Usage: 10.8 MB, less than 65.07% of C++ online submissions for Different Ways to Add Parentheses.
*/
class Solution {
public:
    int cal(int n1, int n2, char o) {
        if(o=='+') return n1+n2;
        if(o=='-') return n1-n2;
        if(o=='*') return n1*n2;
        return 0;
    }
    
    vector<int> diffWaysToCompute(string e) {
        vector<int> ans;
        bool flag = true;
        for(int i = 0; i<e.size(); i++) {
            
            if(!(e[i]>='0' && e[i]<='9')) {
                flag = false;
                vector<int> l = diffWaysToCompute(e.substr(0,i));
                vector<int> r = diffWaysToCompute(e.substr(i+1));
                for(int n1:l) {
                    for(int n2:r) {
                        ans.push_back(cal(n1,n2,e[i]));
                    }
                }
            }
        }
        if(flag) ans.push_back(stoi(e));
        return ans;
    }
};