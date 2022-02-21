/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Binary Watch.
Memory Usage: 6.3 MB, less than 89.29% of C++ online submissions for Binary Watch.
*/
class Solution {
public:
    int countBits(int n){
        int cnt = 0;
        while(n){
            cnt+=n&1;
            n>>=1;
        }
        return cnt;
    }
    
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> ans;
        for(int i = 0; i<=11; i++){
            for(int j = 0; j <60; j++){
                if(countBits(i)+countBits(j)==turnedOn){
                    ans.push_back(to_string(i)+":"+(j<10?"0"+to_string(j):to_string(j)));
                }
            }
        }
        return ans;
    }
};