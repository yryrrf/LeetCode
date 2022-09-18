/*
Runtime: 563 ms, faster than 91.62% of C++ online submissions for Divide Intervals Into Minimum Number of Groups.
Memory Usage: 101.1 MB, less than 48.20% of C++ online submissions for Divide Intervals Into Minimum Number of Groups.
*/
class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        priority_queue<int,vector<int>,greater<int>> pq;
        for(vector<int> v:intervals) {
            if(!pq.empty() && pq.top()<v[0]) {
                pq.pop();
            }
            pq.push(v[1]);
        }
        return pq.size();
    }
};