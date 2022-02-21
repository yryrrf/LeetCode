/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Count Vowels Permutation.
Memory Usage: 5.9 MB, less than 95.74% of C++ online submissions for Count Vowels Permutation.
*/
class Solution {
public:
    int countVowelPermutation(int n) {
        long long a=1,e=1,i=1,o=1,u=1;
        const long long mod = 1e9+7;
        for(int j = 1;j<n;j++){
            long long a1,e1,i1,o1,u1;
            a1=(e+u+i)%mod;
            e1=(a+i)%mod;
            i1=(e+o)%mod;
            o1=i%mod;
            u1=(i+o)%mod;
            a=a1,e=e1,i=i1,o=o1,u=u1;
        }
        return (a+e+i+u+o)%mod;
    }
    
};