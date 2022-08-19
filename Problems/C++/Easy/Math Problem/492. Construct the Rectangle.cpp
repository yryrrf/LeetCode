/*
Runtime: 2 ms, faster than 61.28% of C++ online submissions for Construct the Rectangle.
Memory Usage: 6.1 MB, less than 74.07% of C++ online submissions for Construct the Rectangle.
*/
class Solution {
public:
    vector<int> constructRectangle(int area) {
        int i = sqrt(area);
        while(area%i!=0) {
            i--;
        }
        return {area/i, i};
    }
};