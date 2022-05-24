/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Percentage of Letter in String.
Memory Usage: 6.1 MB, less than 84.12% of C++ online submissions for Percentage of Letter in String.
*/
class Solution {
public:
    int percentageLetter(string s, char letter) {
        int count = 0;
        for(char c:s){
            if(c==letter) count++;
        }
        return count==0?0:count*100/s.size();
    }
};