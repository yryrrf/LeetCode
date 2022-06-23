/*
Runtime: 38 ms, faster than 97.12% of C++ online submissions for Teemo Attacking.
Memory Usage: 25.9 MB, less than 67.13% of C++ online submissions for Teemo Attacking.
*/
class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ans = 0;
        int end = 0;
        for(int i = 0; i<timeSeries.size(); i++) {
            if(timeSeries[i]>=end) {
                ans+=duration;
            }else{
                ans+=timeSeries[i] - end+duration;
            }
            end = timeSeries[i] + duration;
        }
        return ans;
    }
};
