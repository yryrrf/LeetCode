/*
Runtime: 378 ms, faster than 7.65% of C++ online submissions for Minimum Rounds to Complete All Tasks.
Memory Usage: 103.6 MB, less than 68.71% of C++ online submissions for Minimum Rounds to Complete All Tasks.
*/
class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> um;
        for(int task:tasks){
            um[task]++;
        }
        int ans = 0;
        for(auto it:um){
            if(it.second<2){
                return -1;
            }
            ans+=it.second/3;
            if(it.second%3){
                ans++;
            }
        }
        return ans;
    }
};