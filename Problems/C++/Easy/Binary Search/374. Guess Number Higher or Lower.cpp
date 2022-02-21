/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Guess Number Higher or Lower.
Memory Usage: 5.9 MB, less than 67.41% of C++ online submissions for Guess Number Higher or Lower.
*/
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int left = 1, right = n;
        int mid = n;
        while(left<right){
            mid = left+(right-left)/2;
            if(guess(mid)==1){
                left = mid+1;
            }else if(guess(mid)<=0){
                right = mid;
            }
        }
        return left;
    }
};