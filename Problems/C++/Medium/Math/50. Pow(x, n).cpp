/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Pow(x, n).
Memory Usage: 6 MB, less than 39.85% of C++ online submissions for Pow(x, n).
*/
class Solution {
public:
    double myPow(double x, int n) {
        long N = abs(n);
        double ans = 1.0;
		
        while(N>0){
            if(N&1) ans*=x;
            x*=x;
            N/=2;
        }
		
        if(n<0) ans = 1/ans;

        return ans;
    
    }
};
