/*
Runtime: 126 ms, faster than 79.61% of C++ online submissions for Minimum Number of Swaps to Make the String Balanced.
Memory Usage: 31.1 MB, less than 96.14% of C++ online submissions for Minimum Number of Swaps to Make the String Balanced.
*/
class Solution {
public:
    int minSwaps(string s) {
        int o = 0;
        int c = 0;
        for(char c_:s) {
            if(c_=='[') o++;
            else if(o>0) o--;
            else c++;
        }
        
        return (c+1)/2;
    }
};

