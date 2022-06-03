/*
Runtime: 4 ms, faster than 31.44% of C++ online submissions for Decode String.
Memory Usage: 11.1 MB, less than 9.27% of C++ online submissions for Decode String.
*/
class Solution {
public:
    string ans = "";
    string decodeString(string s) {
        stack<char> stk;
        for(int i =0;i<s.size(); i++){
            if(s[i]==']'){
                process(stk);
            }else{
                stk.push(s[i]);
            }
        }
        string tmp = "";
        while(!stk.empty()){
            tmp = stk.top() +tmp;
            stk.pop();
        }
        ans+=tmp;
        return ans;
    }
    
    void process(stack<char>& stk){
        string tmp = "";
        while(stk.top()!='['){
            tmp = stk.top()+tmp;
            stk.pop();
        }
        stk.pop();
        string times = "";
        while(!stk.empty() && (stk.top()>='0' && stk.top()<='9')){
            times = stk.top() + times;
            stk.pop();
        }
        for(int i = 1;i<=stoi(times); i++){
            for(int j = 0; j<tmp.size(); j++){
                stk.push(tmp[j]);
            }
        }
        
    }
};