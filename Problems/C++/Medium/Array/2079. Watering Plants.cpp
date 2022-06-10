/*
Runtime: 7 ms, faster than 49.78% of C++ online submissions for Watering Plants.
Memory Usage: 8.5 MB, less than 46.17% of C++ online submissions for Watering Plants.
*/
class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int i = 0, tmp = capacity, ans = 0;
        while(i<plants.size()){
            if(tmp>=plants[i]){
                ans++;
                tmp -= plants[i];
                i++;
            }else{
                ans += 2*i;
                tmp = capacity;
            }
        }
        return ans;
    }
};