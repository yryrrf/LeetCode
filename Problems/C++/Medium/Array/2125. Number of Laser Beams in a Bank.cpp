/*
Runtime: 77 ms, faster than 99.47% of C++ online submissions for Number of Laser Beams in a Bank.
Memory Usage: 22.7 MB, less than 99.59% of C++ online submissions for Number of Laser Beams in a Bank.
*/
class Solution {
public:
    Solution() {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    }
    
    int numberOfBeams(vector<string>& bank) {
        int lastCnt = 0;
        int ans = 0;
        for(int i = 0; i<bank.size(); i++) {
            int tmp = 0;
            for(char c:bank[i]) {
                tmp+=c=='1';
            }
            ans+=lastCnt*tmp;
            if(tmp!=0) {
                lastCnt = tmp;
            }
        }
        return ans;
    }
};