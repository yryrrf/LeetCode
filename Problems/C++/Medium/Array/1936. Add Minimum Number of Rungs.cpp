/*
Runtime: 96 ms, faster than 90.59% of C++ online submissions for Add Minimum Number of Rungs.
Memory Usage: 54.2 MB, less than 70.74% of C++ online submissions for Add Minimum Number of Rungs.
*/
class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int ans = 0;
        for(int i = 0; i<rungs.size()-1; i++){
            if(rungs[i+1] - rungs[i] > dist){
                ans+=(rungs[i+1] - rungs[i]-1)/dist;
            }
        }
        if(rungs[0]>dist) ans+=(rungs[0]-1)/dist;
        return ans;
    }
};