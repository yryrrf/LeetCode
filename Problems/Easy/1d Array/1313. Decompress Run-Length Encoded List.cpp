/*
Runtime: 8 ms, faster than 47.23% of C++ online submissions for Decompress Run-Length Encoded List.
Memory Usage: 10 MB, less than 77.46% of C++ online submissions for Decompress Run-Length Encoded List.
*/
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> result;
        for(int i = 0;i<nums.size();i+=2){
            for(int j=0;j<nums[i];j++){
                result.push_back(nums[i+1]);
            }
        }
        return result;
    }
};