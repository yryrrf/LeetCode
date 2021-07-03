/*
Runtime: 76 ms
Memory Usage: 32.3 MB
You are here!
Your runtime beats 25.10 % of cpp submissions.
You are here!
Your memory usage beats 16.33 % of cpp submissions.
*/
#include <vector>
class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        const int mod = (1e9)+7;
        
        horizontalCuts.push_back(0);
        verticalCuts.push_back(0);
        
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        
        horizontalCuts.push_back(h);
        verticalCuts.push_back(w);
        
        int maxheight = 0;
        int maxwidth = 0;
        
        for(int i=1;i<horizontalCuts.size();i++){
            maxheight=max(maxheight, horizontalCuts[i]-horizontalCuts[i-1]);
        }
        
        for(int i=1;i<verticalCuts.size();i++){
            maxwidth=max(maxwidth, verticalCuts[i]-verticalCuts[i-1]);
        }
        
        return (int)(((long long)maxheight*(long long)maxwidth) %(mod));
    }
};