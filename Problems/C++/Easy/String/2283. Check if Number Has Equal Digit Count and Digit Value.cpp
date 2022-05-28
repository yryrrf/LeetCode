/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Check if Number Has Equal Digit Count and Digit Value.
Memory Usage: 6.1 MB, less than 40.00% of C++ online submissions for Check if Number Has Equal Digit Count and Digit Value.
*/
class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int,int> um;
        for(int i  = 0; i<num.size(); i++){
            um[num[i]-'0']++;
        }
        for(int i = 0; i<num.size(); i++){
            if(um[i]!=(num[i]-'0')) return false;
        }
        return true;
    }
};