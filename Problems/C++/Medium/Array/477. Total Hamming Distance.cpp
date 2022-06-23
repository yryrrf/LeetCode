/*
Runtime: 66 ms, faster than 71.40% of C++ online submissions for Total Hamming Distance.
Memory Usage: 19 MB, less than 92.61% of C++ online submissions for Total Hamming Distance.
*/
class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i<30; i++) {
            int tmp = 0;
            for(int num:nums) {
                tmp+=(num>>i)&1;
            }
            ans+=tmp*(nums.size()-tmp);
        }
        return ans;
    }
};
