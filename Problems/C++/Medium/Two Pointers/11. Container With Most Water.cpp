/*
Runtime: 76 ms, faster than 89.38% of C++ online submissions for Container With Most Water.
Memory Usage: 59.1 MB, less than 37.20% of C++ online submissions for Container With Most Water.
*/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int maxSum = 0;
        while(left<right){
            maxSum=max(maxSum,min(height[left],height[right])*(right-left));
            if(height[left]>height[right]){
                right--;
            }else{
                left++;
            }     
        }
        return maxSum;
    }
};