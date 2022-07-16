/*
Runtime: 271 ms, faster than 74.36% of C++ online submissions for Destroying Asteroids.
Memory Usage: 102.5 MB, less than 98.53% of C++ online submissions for Destroying Asteroids.
*/
class Solution {
public:
    Solution() {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    }
    
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(), asteroids.end());
        long long tmp = mass;
        for(int i = 0; i<asteroids.size(); i++) {
            if(asteroids[i]>tmp) return false;
            tmp+=asteroids[i];
        }
        return true;
    }
};