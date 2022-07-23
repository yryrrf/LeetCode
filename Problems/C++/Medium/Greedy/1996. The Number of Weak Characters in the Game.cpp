/*
Runtime: 809 ms, faster than 82.91% of C++ online submissions for The Number of Weak Characters in the Game.
Memory Usage: 125.2 MB, less than 69.11% of C++ online submissions for The Number of Weak Characters in the Game.
*/
class Solution {
public:
    static bool cmp(const vector<int>& a, const vector<int>& b) {
        return (a[0] == b[0])?a[1]<b[1]:a[0]>b[0];
    }
    
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(), properties.end(), cmp);
        int ans = 0;
        int highest = 0;
        for(const vector<int>& pro: properties) {
            if(pro[1]>=highest) {
                highest = pro[1];
            }else{
                ans++;
            }
        }
        return ans;
    }
};