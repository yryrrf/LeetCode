/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Maximum 69 Number.
Memory Usage: 5.9 MB, less than 84.55% of C++ online submissions for Maximum 69 Number.
*/
class Solution {
public:
    int maximum69Number (int num) {
        int tmp = 1;
        int index = 0;
        while(tmp*10<num) {
            tmp*=10;
        }
        
        while(tmp) {
            int tmp2 = (num/tmp)%10;
            if(tmp2 == 6) {
                return num+tmp*3;
            }
            tmp/=10;
        }
        return num;
    }
};