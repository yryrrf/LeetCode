/*
Runtime: 3 ms, faster than 43.07% of C++ online submissions for Calculate Digit Sum of a String.
Memory Usage: 6.1 MB, less than 71.50% of C++ online submissions for Calculate Digit Sum of a String.
*/
class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size()>k){
            string tmpString = "";
            for(int i = 0; i<s.size(); i+=k){
                int tmp = 0;
                for(int j =i; j<i+k && j<s.size(); j++){
                    tmp += s[j]-'0';
                }
                tmpString+=to_string(tmp);
            }
            s = tmpString;
        }
        return s;
    }
};