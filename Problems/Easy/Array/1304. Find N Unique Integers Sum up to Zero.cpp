/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Find N Unique Integers Sum up to Zero.
Memory Usage: 6.8 MB, less than 6.20% of C++ online submissions for Find N Unique Integers Sum up to Zero.
*/
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> result;
        for(int i = 1;i<n/2+1;i++){
            result.push_back(i);
            result.push_back(-i);
        }
        if(n%2==1) result.push_back(0);
        return result;
    }
};