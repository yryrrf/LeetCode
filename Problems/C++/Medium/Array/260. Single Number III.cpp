/*
Runtime: 27 ms, faster than 5.22% of C++ online submissions for Single Number III.
Memory Usage: 10.7 MB, less than 25.63% of C++ online submissions for Single Number III.
*/
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_set<int> us;
        for(int num:nums){
            if(us.count(num)){
                us.erase(us.find(num));
            }else{
                us.insert(num);
            }
        }
        vector<int> ans;
        for(auto it:us) ans.push_back(it);
        return ans;
    }
};