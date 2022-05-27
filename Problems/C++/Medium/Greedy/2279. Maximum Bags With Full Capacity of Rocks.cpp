/*
Runtime: 245 ms, faster than 73.86% of C++ online submissions for Maximum Bags With Full Capacity of Rocks.
Memory Usage: 86.6 MB, less than 79.50% of C++ online submissions for Maximum Bags With Full Capacity of Rocks.
*/
class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int> prefix(capacity.size(),0);
        for(int i = 0; i<capacity.size(); i++){
            capacity[i] -= rocks[i];
        }
        sort(capacity.begin(),capacity.end());
        int ans = 0;
        for(int i = 0; i<capacity.size(); i++){
            if(capacity[i]>additionalRocks) break;
            ans++;
            additionalRocks-=capacity[i];
        }
        return ans;
    }
};