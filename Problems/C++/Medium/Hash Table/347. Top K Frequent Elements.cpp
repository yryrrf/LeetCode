/*
Runtime: 34 ms, faster than 20.43% of C++ online submissions for Top K Frequent Elements.
Memory Usage: 13.7 MB, less than 72.78% of C++ online submissions for Top K Frequent Elements.
*/
class Solution {
public:
    static bool cmp(const pair<int,int>& a, const pair<int,int>& b) {
        return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i = 0; i<nums.size(); i++) {
            m[nums[i]]++;
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(&cmp)> q(cmp);
        for(auto& it:m) {
            if(q.size()==k) {
                if(q.top().second<it.second) {
                    q.pop();
                    q.emplace(it.first, it.second);
                }
            }else{
                q.emplace(it.first, it.second);
            }
        }
        vector<int> ans;
        while(!q.empty()) {
            ans.emplace_back(q.top().first);
            q.pop();
        }
        return ans;
    }
};