/*
Runtime: 52 ms, faster than 62.70% of C++ online submissions for Count Primes.
Memory Usage: 7.2 MB, less than 70.46% of C++ online submissions for Count Primes.
*/
class Solution {
public:
    int countPrimes(int n) {
    int sum = 0;
    vector<bool> signs(n, true);
    for (int i = 2; i < n; i++) {
        if (signs[i]) {
            sum++;
            for (int j = i + i; j < n; j += i) {
                signs[j] = false;
            }
        }
    }
    return sum;
    }
    
};