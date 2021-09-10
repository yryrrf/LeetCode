/*
Runtime: 210 ms, faster than 15.31% of C++ online submissions for Largest Rectangle in Histogram.
Memory Usage: 63.2 MB, less than 72.45% of C++ online submissions for Largest Rectangle in Histogram.
*/
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        if(heights.size()==0) return 0;
        stack<int> stk;
        int maxResult = 0;
        for(int i = 0; i<heights.size(); i++){
            while(!stk.empty() and heights[i]<heights[stk.top()]){
                int height = heights[stk.top()];
                stk.pop();
                int weight = stk.empty()?i:i-stk.top()-1;
                maxResult = max(maxResult,height*weight);
                
            }
            stk.push(i);
        }
        
        while(!stk.empty()){
            int height = heights[stk.top()];
            stk.pop();
            int weight = stk.empty()?heights.size():heights.size()-stk.top()-1;
            maxResult = max(maxResult,height*weight);
        }
        
        return maxResult;
        
    }
};