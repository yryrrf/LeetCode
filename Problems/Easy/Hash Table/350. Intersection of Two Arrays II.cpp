/*
Runtime: 4 ms, faster than 88.08% of C++ online submissions for Intersection of Two Arrays II.
Memory Usage: 10.7 MB, less than 15.30% of C++ online submissions for Intersection of Two Arrays II.
*/
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> um;
        for(int i = 0; i<nums1.size(); i++){
            if(!um.count(nums1[i])){
                um[nums1[i]] = 1;
            }else{
                um[nums1[i]]++;
            }
        }
        vector<int> ans;
        for(int num:nums2){
            if(um[num]){
                ans.push_back(num);
                um[num]--;
            }
        }
        return ans;
        
    }
};