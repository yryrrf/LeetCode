/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Divide a String Into Groups of Size k.
Memory Usage: 6.9 MB, less than 85.08% of C++ online submissions for Divide a String Into Groups of Size k.
*/
class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> vec;
        string tmp = "";
        for(int i = 0; i<s.size(); i++){
            if(tmp.size()==k){
                vec.push_back(tmp);
                tmp = "";
            }
            tmp += s[i];
        }
        if(tmp!=""){
            for(int i = tmp.size(); i<k; i++){
                tmp+=fill;
            }
            vec.push_back(tmp);
        }
        return vec;
    }
};