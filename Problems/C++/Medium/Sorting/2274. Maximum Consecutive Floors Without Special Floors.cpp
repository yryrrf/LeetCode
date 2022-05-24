/*
Runtime: 218 ms, faster than 64.11% of C++ online submissions for Maximum Consecutive Floors Without Special Floors.
Memory Usage: 58.1 MB, less than 43.45% of C++ online submissions for Maximum Consecutive Floors Without Special Floors.
*/
class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        sort(special.begin(),special.end());
        int ans = 0;
        for(int i = 0; i<special.size()-1; i++){
            ans = max(ans,special[i+1]-special[i]-1);
        }

        ans = max(special[0]-bottom,ans);
        ans = max(top-special[special.size()-1],ans);
        return ans;
    }
};