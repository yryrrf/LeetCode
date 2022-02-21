/*
Runtime: 8 ms, faster than 34.58% of C++ online submissions for Counting Bits.
Memory Usage: 7.8 MB, less than 70.58% of C++ online submissions for Counting Bits.
*/
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result(n+1,0);
        int count;
        
        for(int i = 0 ; i <= n ; ++i){
            count = 0;
            int num = i;
            
            while(num>0){
                if(num%2==1) count++;
                num/=2;
            }
            
            result[i] = count;
        }
        
        return result;
    }
};