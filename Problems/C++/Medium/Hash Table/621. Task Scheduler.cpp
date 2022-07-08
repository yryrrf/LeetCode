/*
Runtime: 67 ms, faster than 95.82% of C++ online submissions for Task Scheduler.
Memory Usage: 34.5 MB, less than 75.58% of C++ online submissions for Task Scheduler.
*/
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> v(26,0);
        int maxCnt = 0;
        int maxSize = 0;
        for(char task:tasks) {
            v[task-'A']++;
            int tmp = v[task-'A'];
            if(tmp>maxSize) {
                maxCnt = 1;
                maxSize = tmp;
            }else if(tmp==maxSize) {
                maxCnt++;
            }
        }
        return max((n+1)*(maxSize-1)+maxCnt, (int)tasks.size());
        
    }
};