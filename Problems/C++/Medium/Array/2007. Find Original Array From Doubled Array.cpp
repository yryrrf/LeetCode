/*
Runtime: 252 ms, faster than 97.23% of C++ online submissions for Find Original Array From Doubled Array.
Memory Usage: 121.4 MB, less than 92.21% of C++ online submissions for Find Original Array From Doubled Array.
*/
class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        if(changed.size()%2==1) return {};
        sort(changed.begin(),changed.end());
        vector<int> ans;
        queue<int> q;
        
        for(int i = 0; i<changed.size(); i++){
            if(!q.empty() && q.front()*2==changed[i]){
                ans.emplace_back(q.front());
                q.pop();
            }else{
                q.push(changed[i]);
            }
        }
        
        if(!q.empty()) return {};
        return ans;
    }
};
