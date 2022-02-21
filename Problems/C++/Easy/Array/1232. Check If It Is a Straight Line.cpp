/*
Runtime: 7 ms, faster than 90.09% of C++ online submissions for Check If It Is a Straight Line.
Memory Usage: 10 MB, less than 94.58% of C++ online submissions for Check If It Is a Straight Line.
*/
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        for(int i = 1; i<coordinates.size(); i++){
            if((coordinates[i][0] - coordinates[0][0])*(coordinates[i][1] - coordinates[n-1][1])!=(coordinates[i][1] - coordinates[0][1])*(coordinates[i][0] - coordinates[n-1][0])) return false;
        }
        return true;
    }
};