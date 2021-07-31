/*
Runtime: 4 ms, faster than 89.12% of C++ online submissions for Trapping Rain Water.
Memory Usage: 14.2 MB, less than 55.02% of C++ online submissions for Trapping Rain Water.
*/
class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()==0 or height.size()==1) return 0;
        int highest;
        for(int i = 0,currNum = 0; i < height.size(); i++){
            if(height[i] > currNum) {
                currNum = height[i];
                highest = i;
            }
        }
        
        int sum = 0;
        int prePos = 0;
        
        for(int i = 0; i <= highest; i++){
            if(height[i] >= height[prePos]){
                prePos = i;
            }
            sum += height[prePos] - height[i];      
        }
        
        prePos = height.size()-1;
		
        for(int i = height.size()-1; i >= highest; i--){
            if(height[i] >= height[prePos]){
               prePos = i;
            }
            sum += height[prePos] - height[i];     
        }
        
        return sum;
    }
};