/*
Runtime: 12 ms, faster than 98.74% of C++ online submissions for Merge Intervals.
Memory Usage: 14.1 MB, less than 82.57% of C++ online submissions for Merge Intervals
*/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        
        vector<int> curr;
        vector<vector<int>> result;
        
        for(int i = 0; i<intervals.size(); i++){
            if(curr.empty()) curr = {intervals[i][0],intervals[i][1]};
            
            if(intervals[i][0]<=curr[1] && intervals[i][1]>=curr[0]){
                curr[0] = intervals[i][0]<curr[0]?intervals[i][0]:curr[0];
                curr[1] = intervals[i][1]>curr[1]?intervals[i][1]:curr[1];
            }else{
                result.push_back(curr);
                curr={};
                i--;
            }
        }
        
        if(!curr.empty()) result.push_back(curr);
        
        return result;
    }
};