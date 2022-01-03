/*
Runtime: 4 ms, faster than 48.62% of C++ online submissions for Merge Sorted Array.
Memory Usage: 9 MB, less than 70.80% of C++ online submissions for Merge Sorted Array.
*/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans(m+n);
        int i = 0;
        int p1 = 0,p2=0;
        while(p1<m || p2<n){
            if(p1==m){
                ans[i] = nums2[p2++];
            }else if(p2==n){
                ans[i] = nums1[p1++];
            }else if(nums1[p1]<nums2[p2]){
                ans[i] = nums1[p1++];
            }else{
                ans[i] = nums2[p2++];
            }
            i++;
        }
        nums1 = ans;
    }
};