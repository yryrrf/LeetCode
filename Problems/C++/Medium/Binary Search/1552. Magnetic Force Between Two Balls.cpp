/*
Runtime: 442 ms, faster than 7.59% of C++ online submissions for Magnetic Force Between Two Balls.
Memory Usage: 57.9 MB, less than 78.04% of C++ online submissions for Magnetic Force Between Two Balls.
*/
class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int l = 1;
        int r = position[position.size()-1] - l;
        while(l<=r) {
            int mid = (l+r)/2;
            if(check(position, mid)>=m) {
                l = mid + 1;
            }else {
                r = mid - 1;
            }
        }
        return l-1;
    }
    
    int check(vector<int>& position, int mid) {
        int tmp = 0;
        int cnt = 1;
        for(int i = 1; i<position.size(); i++){
            if(position[i] - position[tmp] >= mid) {
                tmp = i;
                cnt++;
            }
        }
        return cnt;
    }
    
};