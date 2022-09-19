/*
Runtime: 328 ms, faster than 42.86% of C++ online submissions for Maximum Matching of Players With Trainers.
Memory Usage: 76.3 MB, less than 100.00% of C++ online submissions for Maximum Matching of Players With Trainers.
*/
class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        int p = 0;
        int ans = 0;
        for(int i = 0; i<players.size(); i++) {
            while(p<trainers.size() && trainers[p]<players[i]) {
                p++;
            }
            if(p>=trainers.size()) {
                break;
            }
            ans++;
            p++;
            
        }
        return ans;
    }
}; 