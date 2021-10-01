/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Permutation Sequence.
Memory Usage: 6.1 MB, less than 15.94% of C++ online submissions for Permutation Sequence.
*/
class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> factorial(n,1);
        for(int i = 1; i<factorial.size(); i++) factorial[i] = factorial[i-1]*i;
        string ans;
        vector<int> valid(n+1,1);
        k--;
        for(int i = 1; i<=n; i++){
            int order = k/factorial[n-i]+1;
            for (int j = 1; j <= n; ++j) {
                order -= valid[j];
                if (!order) {
                    ans += (j + '0');
                    valid[j] = 0;
                    break;
                }
            }
            k %= factorial[n - i];
        }
        
        return ans;
    }
};