/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Valid Perfect Square.
Memory Usage: 5.8 MB, less than 86.15% of C++ online submissions for Valid Perfect Square.
*/
class Solution {
public:
    bool isPerfectSquare(int num) {
        long left = 0;
        long right = num;
        while(left<=right){
            int mid = (right - left )/2 + left;
            long tmp = (long)mid*mid;
            if(tmp==num) return true;
            if(tmp < num){
                left = mid+1;
            }else{
                right = mid-1;
            }
        }
        return false;
    }
};