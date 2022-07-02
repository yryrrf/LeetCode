/*
Runtime: 324 ms, faster than 31.35% of C++ online submissions for Maximum Number of Eaten Apples.
Memory Usage: 47.3 MB, less than 59.84% of C++ online submissions for Maximum Number of Eaten Apples.
*/
class Solution {
public:
    int eatenApples(vector<int>& apples, vector<int>& days) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        int ans = 0;
        int curr = 1;
        while(!pq.empty() || curr-1<apples.size()) {
            if(curr-1<apples.size() && days[curr-1]) {
                pq.push({days[curr-1]+curr, apples[curr-1]});
            }
            while(!pq.empty() && (curr>=pq.top().first || pq.top().second==0)) pq.pop();
            
            if(!pq.empty()) {
                ans++;
                int tmp1 = pq.top().first, tmp2 = pq.top().second;
                pq.pop();
                pq.push({tmp1,tmp2-1});
            }
            curr++;
        }
        return ans;
    }
};
