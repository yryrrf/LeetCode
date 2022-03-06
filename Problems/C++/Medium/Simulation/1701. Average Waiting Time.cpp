/*
Runtime: 180 ms, faster than 99.19% of C++ online submissions for Average Waiting Time.
Memory Usage: 72.8 MB, less than 74.59% of C++ online submissions for Average Waiting Time.
*/
class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        long long waitTime = 0;
        long long timeNow = 0;
        for(int i = 0 ; i<customers.size(); i++){
            if(timeNow<customers[i][0]){
                timeNow = customers[i][0];
            }
            int finishTime = customers[i][1] + timeNow;
            waitTime+=finishTime-customers[i][0];
            timeNow = finishTime;
            
        }
        double ans = (double) waitTime / (double) customers.size();
        return ans;
    }
};