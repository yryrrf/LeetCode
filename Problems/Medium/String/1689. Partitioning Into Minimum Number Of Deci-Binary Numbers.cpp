/*
Runtime: 32 ms, faster than 79.53% of C++ online submissions for Partitioning Into Minimum Number Of Deci-Binary Numbers.
Memory Usage: 13.6 MB, less than 48.61% of C++ online submissions for Partitioning Into Minimum Number Of Deci-Binary Numbers.
*/
class Solution {
public:
    int minPartitions(string n) {
        int result=0;
        for(char c : n){
            result = max(result,(int)c);
        }
        return result-(int)'0';
    }
};