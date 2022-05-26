/*
Runtime: 51 ms, faster than 91.08% of C++ online submissions for Find the Difference of Two Arrays.
Memory Usage: 32.2 MB, less than 68.74% of C++ online submissions for Find the Difference of Two Arrays.
*/
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans(2);
        unordered_map<int,int> um1,um2;
        for(int i = 0; i<nums1.size() || i<nums2.size(); i++){
            if(i<nums1.size()) um1[nums1[i]]++;
            if(i<nums2.size()) um2[nums2[i]]++;
        }
 
        for(auto& it:um1){
            if(!um2.count(it.first)){
                ans[0].push_back(it.first);
            }
        }
        for(auto& it:um2){
            if(!um1.count(it.first)){
                ans[1].push_back(it.first);
            }
        }
        return ans;
    }
};