/*
Runtime: 10 ms, faster than 45.57% of C++ online submissions for Intersection of Two Arrays.
Memory Usage: 10.4 MB, less than 40.43% of C++ online submissions for Intersection of Two Arrays.
*/
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> us;
        vector<int> ans;
        for(int n:nums1) {
            if(!us.count(n)) us.emplace(n);
        }
        unordered_set<int> tmp;
        for(int n:nums2){
            if(us.count(n) && !tmp.count(n)){
                ans.push_back(n);
                tmp.emplace(n);
            } 
        }
        return ans;
    }
};