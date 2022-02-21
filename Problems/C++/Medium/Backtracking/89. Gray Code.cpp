/*
Runtime: 4 ms, faster than 96.57% of C++ online submissions for Gray Code.
Memory Usage: 11.3 MB, less than 87.51% of C++ online submissions for Gray Code.
*/
class Solution {
public:
    vector<int> grayCode(int n) {
        int size=1<<n;
        vector<int> result(size);
        for(int i = 0;i<size;i++){
            result[i] = i^i>>1;
        }
        return result;
    }
};
