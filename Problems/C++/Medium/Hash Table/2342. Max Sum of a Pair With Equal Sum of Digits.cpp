/*
Runtime: 269 ms, faster than 100.00% of C++ online submissions for Max Sum of a Pair With Equal Sum of Digits.
Memory Usage: 73.6 MB, less than 100.00% of C++ online submissions for Max Sum of a Pair With Equal Sum of Digits.
*/
class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int,vector<int>> um;
        for(int num: nums) {
            um[sum(num)].push_back(num);
        }
        int ans = -1;
        for(auto it:um) {
            vector<int> tmp = it.second;
            if(tmp.size()<2) continue;
            sort(tmp.rbegin(), tmp.rend());
            ans = max(ans,tmp[0] + tmp[1]);
        }
        return ans;
    }
    
    int sum(int n) {
        int ans = 0;
        while(n!=0) {
            ans+=n%10;
            n/=10;
        }
        return ans;
    }
};