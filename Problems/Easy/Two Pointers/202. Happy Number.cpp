/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Happy Number.
Memory Usage: 5.9 MB, less than 86.07% of C++ online submissions for Happy Number.
*/
class Solution {
    int nextNum(int n){
        int result = 0;
        while(n!=0){
            result+= (n%10)*(n%10);
            n/=10;
        }
        return result;
    }
public:
    bool isHappy(int n) {
        int slow = n, fast = n;
        fast = nextNum(fast);
        while(fast != 1 && slow!=fast){
            slow = nextNum(slow);
            fast = nextNum(nextNum(fast));
        }
        return fast == 1;
    }
};