/*
Runtime: 243 ms, faster than 16.67% of C++ online submissions for Count the Hidden Sequences.
Memory Usage: 106.6 MB, less than 91.67% of C++ online submissions for Count the Hidden Sequences.
*/
class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long curr = 0;
        long minN = 0;
        long maxN = 0;
        for(int n : differences){
            curr+=n;
            minN = min(curr,minN);
            maxN = max(curr,maxN);
        }
        if(lower-minN> upper - maxN) return 0;
        return (int)((upper-maxN)+(minN-lower)+1);
    }
};