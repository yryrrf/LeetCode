/*
Runtime: 182 ms, faster than 96.11% of C++ online submissions for Maximum Distance Between a Pair of Values.
Memory Usage: 98.6 MB, less than 28.04% of C++ online submissions for Maximum Distance Between a Pair of Values.
*/
class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int ans = 0;
        int i = 0;
        for(int j = 0; j<nums2.size(); j++) {
            while(i<nums1.size() && nums1[i] > nums2[j]) {
                i++;
            }
            if(i<nums1.size()) ans = max(ans, j-i);
        }
        return ans;
    }
};