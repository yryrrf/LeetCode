/*
Runtime: 10 ms, faster than 22.97% of C++ online submissions for Rectangle Area.
Memory Usage: 5.8 MB, less than 96.55% of C++ online submissions for Rectangle Area.
*/
class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int aArea, bArea;
        aArea = (ax2-ax1)*(ay2-ay1);
        bArea = (bx2-bx1)*(by2-by1);
        int overlapWidth = min(bx2,ax2)-max(bx1,ax1);
        int overlapHeight = min(by2,ay2) - max(by1,ay1);
        int overlapArea;
        if(overlapWidth <=0 || overlapHeight<=0){
            overlapArea = 0;
        }else{
            overlapArea = overlapWidth*overlapHeight;
        }
        return aArea + bArea - overlapArea;
    }
};