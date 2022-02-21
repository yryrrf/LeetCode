/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Number of Steps to Reduce a Number to Zero.
Memory Usage: 5.9 MB, less than 71.36% of C++ online submissions for Number of Steps to Reduce a Number to Zero.
*/
class Solution {
    int step=0;
public:
    int numberOfSteps(int num) {
        dp(num);
        return step;
    }
    
    void dp(int num){
        if(num==0) return;
        if(num%2==0) {
            step+=1;
            dp(num/2);
            
        }else{
            step+=1;
            dp(num-1);
        }
        return;
    }
};