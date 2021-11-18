/*
Runtime: 16 ms, faster than 67.18% of C++ online submissions for Insert Interval.
Memory Usage: 17.2 MB, less than 40.84% of C++ online submissions for Insert Interval.
*/
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int left = newInterval[0];
        int right = newInterval[1];
        bool flag = false;
        vector<vector<int>> result;
        
        for(vector<int>& vec:intervals){
            
            if(vec[1]<left){
                result.push_back(vec);
            }else if(vec[0]>right){
                if(!flag){
                    result.push_back({left,right});
                    flag = true;
                }
                result.push_back(vec);
            }else{
                left = min(vec[0], left);
                right = max(vec[1],right);
            }  
            
        }
        
        if(!flag){
            result.push_back({left,right});
        }
        
        return result;
    }
};