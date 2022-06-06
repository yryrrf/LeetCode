/*
Runtime: 4 ms, faster than 60.11% of C++ online submissions for Two Furthest Houses With Different Colors.
Memory Usage: 8.8 MB, less than 93.35% of C++ online submissions for Two Furthest Houses With Different Colors.
*/
class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size()-1;
        int i = 0, j = n;
        while(colors[0]==colors[j]) j--;
        while(colors[n] == colors[i]) i++;
        return max(n-i,j);
    }
};