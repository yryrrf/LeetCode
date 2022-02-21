/*
Runtime: 20 ms, faster than 62.80% of C++ online submissions for Single Number.
Memory Usage: 20.1 MB, less than 13.16% of C++ online submissions for Single Number.
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> um;
        for(int num:nums){
            um[num] +=1;
        }
        
        for(auto& it:um){
            if(it.second<2)  return it.first;
        }
        
        return 1;
    }
};