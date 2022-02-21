/*
Runtime: 14 ms, faster than 22.50% of C++ online submissions for Sum of Square Numbers.
Memory Usage: 5.9 MB, less than 26.87% of C++ online submissions for Sum of Square Numbers.
*/
class Solution {
public:
    bool judgeSquareSum(int c) {
        long left = 0;
        long right = sqrt(INT_MAX);
        
        while(left<=right){
            long sum = left*left+right*right;
            if(sum == c) return true;
            if(sum>c){
                right--;
            }else{
                left++;
            }
        }
                
        return false;
    }
};