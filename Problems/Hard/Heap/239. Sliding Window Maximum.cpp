/*
Runtime: 276 ms, faster than 49.41% of C++ online submissions for Sliding Window Maximum.
Memory Usage: 145.7 MB, less than 26.28% of C++ online submissions for Sliding Window Maximum.
*/
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
        priority_queue<pair<int,int>> pq;
        
        for(int i = 0 ; i < k; i++){
            pq.emplace(nums[i],i);
        }
        
        result.push_back(pq.top().first);
        
        for(int i = k ; i<nums.size() ; i++){
            pq.emplace(nums[i],i);
            while(pq.top().second<=i-k){
                pq.pop();
            }
            result.push_back(pq.top().first);
        }
        
        return result;
    }
};