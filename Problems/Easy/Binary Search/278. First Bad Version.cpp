/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for First Bad Version.
Memory Usage: 5.8 MB, less than 90.03% of C++ online submissions for First Bad Version.
*/
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 0,right=n,mid = n/2;
        while(left<right){
            if(isBadVersion(mid)==true){
                right = mid;
            }else{
                left = mid+1;
            }
            mid = (right-left)/2+left;
        }
        return right;
    }
};