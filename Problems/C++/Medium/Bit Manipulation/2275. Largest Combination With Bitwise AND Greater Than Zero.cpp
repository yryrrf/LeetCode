/*
Runtime: 181 ms, faster than 78.82% of C++ online submissions for Largest Combination With Bitwise AND Greater Than Zero.
Memory Usage: 57.6 MB, less than 47.39% of C++ online submissions for Largest Combination With Bitwise AND Greater Than Zero.
*/
class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int array[32]={0};
        for(int c: candidates){
            for(int i = 0; i<32;i++){
                if(((1<<i)&c) > 0) array[i]++;
            }
        }
        int ans = 0;
        for(int i = 0; i<32; i++){
            ans = max(ans,array[i]);
        }
        return ans;
    }
};