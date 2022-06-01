/*
Runtime: 679 ms, faster than 47.33% of C++ online submissions for Intervals Between Identical Elements.
Memory Usage: 127.9 MB, less than 79.00% of C++ online submissions for Intervals Between Identical Elements.
*/
class Solution {
public:
    vector<long long> getDistances(vector<int>& arr) {
        unordered_map<int, vector<int>> pos;
        vector<long long> ans(arr.size(),0);
        for(int i = 0; i<arr.size(); i++){
            pos[arr[i]].push_back(i);
        }
        for(auto it:pos){
            long long sum = 0;
            for(int i:it.second){
                sum+=i - it.second[0];
            }
            ans[it.second[0]] = sum;
            for(int i = 1; i<it.second.size(); i++){
                sum += (2*i-it.second.size())*(it.second[i]-it.second[i-1]);
                ans[it.second[i]] = sum;
            }
        }
        return ans;
    }
};