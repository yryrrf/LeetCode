/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Ugly Number.
Memory Usage: 6.1 MB, less than 19.84% of C++ online submissions for Ugly Number.
*/
class Solution {
public:
    bool isUgly(int n) {
        if(n<=0) return false;
        vector<int> prime = {2,3,5};
        for(int num:prime){
            while(n%num==0){
                n/=num;
            }
        }
        return n==1;
    }
};