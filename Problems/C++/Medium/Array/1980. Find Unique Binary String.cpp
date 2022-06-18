/*
Runtime: 10 ms, faster than 29.47% of C++ online submissions for Find Unique Binary String.
Memory Usage: 10.3 MB, less than 57.15% of C++ online submissions for Find Unique Binary String.
*/
class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_set<int> us;
        for(int i = 0; i<nums.size(); i++) {
            us.emplace(stoi(nums[i], nullptr, 2));
        }
        int i = 0;
        while(us.count(i)) {
            i++;
        }
        return bitset<16>(i).to_string().substr(16-nums[0].size(),16);
    }
};