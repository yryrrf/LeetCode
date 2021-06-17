/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Subtract the Product and Sum of Digits of an Integer.
Memory Usage: 5.8 MB, less than 68.28% of C++ online submissions for Subtract the Product and Sum of Digits of an Integer.
*/
class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1;
        int sum=0;
        while(n>0){
            product*= n%10;
            sum+=n%10;
            n/=10;
        }
        return product-sum;
    }
};