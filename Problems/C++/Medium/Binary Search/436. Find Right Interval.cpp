/*
Runtime: 98 ms, faster than 70.65% of C++ online submissions for Find Right Interval.
Memory Usage: 25.6 MB, less than 85.85% of C++ online submissions for Find Right Interval.
*/
class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<pair<int,int>> bs;
        for(int i = 0; i<intervals.size(); i++) {
            bs.emplace_back(intervals[i][0],i);
        }
        sort(bs.begin(), bs.end());
        vector<int> ans;
        for(int i = 0; i<intervals.size(); i++) {
            int l = 0;
            int r = intervals.size()-1;
            int tmp = intervals[i][1];
            while(l<r) {
                int mid = (l+r)>>1;
                if(bs[mid].first>=tmp) {
                    r = mid;
                }else {
                    l = mid+1;
                }
            }
            if(bs[r].first>=tmp) {
                ans.emplace_back(bs[r].second);
            }else{
                ans.emplace_back(-1);
            }
        }
        return ans;
    }
};