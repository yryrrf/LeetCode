/*
Runtime: 21 ms, faster than 91.88% of C++ online submissions for Number of Ways Where Square of Number Is Equal to Product of Two Numbers.
Memory Usage: 11.1 MB, less than 81.62% of C++ online submissions for Number of Ways Where Square of Number Is Equal to Product of Two Numbers.
*/
class Solution {
public:
    int getCounts(unordered_map<int,int>& um1, unordered_map<int,int>& um2) {
        int ans = 0;
        for(auto& it1 : um1) {
            long long square = (long long)it1.first*it1.first;
            for(auto& it2:um2) {
                if(square%it2.first != 0 || square/it2.first>INT_MAX) {
                    continue;
                }
                int num = square/it2.first;
                if(num == it2.first) {
                    ans+=it1.second*it2.second*(it2.second-1)/2;
                }else if(num<it2.first && um2.count(num)){
                    ans+= it1.second*it2.second*um2[num];
                }
            }
        }
        return ans;
    }
    
    int numTriplets(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> um1;
        unordered_map<int,int> um2;
        int n = max(nums1.size(), nums2.size());
        for(int i = 0; i<n; i++) {
            if(i<nums1.size()) um1[nums1[i]]++;
            if(i<nums2.size()) um2[nums2[i]]++;
        }
        return getCounts(um1,um2) + getCounts(um2,um1);
    }
};
