/*
Runtime: 261 ms, faster than 17.69% of C++ online submissions for Find the Student that Will Replace the Chalk.
Memory Usage: 74.3 MB, less than 95.77% of C++ online submissions for Find the Student that Will Replace the Chalk.
*/
class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long sum = 0;
        for(int c:chalk) sum+=c;
        long long k1 = k;
        k1%=sum;
        for(int i = 0; i<chalk.size(); i++) {
            if(k1<chalk[i]) {
                return i;
            }
            k1-=chalk[i];
        }
        return chalk.size()-1;
    }
};