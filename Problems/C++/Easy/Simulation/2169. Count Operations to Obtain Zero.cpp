/*
Runtime: 3 ms, faster than 51.97% of C++ online submissions for Count Operations to Obtain Zero.
Memory Usage: 5.7 MB, less than 95.33% of C++ online submissions for Count Operations to Obtain Zero.
*/
class Solution {
public:
    int countOperations(int num1, int num2) {
        int ans = 0;
        while(num1!=0 && num2!=0){
            if(num1>=num2){
                num1-=num2;
            }else{
                num2-=num1;
            }
            ans++;
        }
        return ans;
    }
};