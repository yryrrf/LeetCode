/*
Runtime: 11 ms, faster than 20.07% of C++ online submissions for Sqrt(x).
Memory Usage: 5.9 MB, less than 23.13% of C++ online submissions for Sqrt(x).
*/
class Solution {
public:
    int mySqrt(int x) {
        int left = 0, right = x,ans = 0;
        
        while(left<=right){
            int mid = (left+right)/2;
            if((long long)mid*mid <= x){
                ans = mid;
                left = mid+1;
            }else{
                right = mid-1;
            }
        }
        return ans;
    }
};