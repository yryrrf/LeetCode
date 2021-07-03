/*
Runtime: 8 ms, faster than 75.94% of C++ online submissions for Roman to Integer.
Memory Usage: 8.2 MB, less than 28.31% of C++ online submissions for Roman to Integer.
*/
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> um;
        um['I'] = 1;
        um['V'] = 5;
        um['X'] = 10;
        um['L'] = 50;
        um['C'] = 100;
        um['D'] = 500;
        um['M'] = 1000;
        int sum = 0;
        for(int i = s.size()-1;i>=0;i--){
            if(i!=s.size()-1){
                sum=(um[s[i]]<um[s[i+1]])?sum-um[s[i]]:sum+um[s[i]];
            }else{
                sum+=um[s[i]];
            }
        }
        return sum;
    }
};