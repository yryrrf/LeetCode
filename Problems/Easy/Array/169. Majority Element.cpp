/*
Runtime: 16 ms, faster than 82.00% of C++ online submissions for Majority Element.
Memory Usage: 19.6 MB, less than 49.06% of C++ online submissions for Majority Element.
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> um;
        for(int i = 0; i<nums.size(); i++){
            um[nums[i]] += 1;
        }
        
        for(auto it :um){
            if(it.second > nums.size()/2) return it.first;
        }
        return 0;
    }
};