/*
Runtime: 12 ms, faster than 64.63% of C++ online submissions for Two Sum.
Memory Usage: 10.8 MB, less than 27.71% of C++ online submissions for Two Sum.
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hashmap;
        for(int i = 0;i<nums.size();i++){
            auto it = hashmap.find(target-nums[i]);
            if(it!=hashmap.end()){
                return {it->second,i};
            }
            hashmap[nums[i]] = i;
        }
        return {};   
    }
};