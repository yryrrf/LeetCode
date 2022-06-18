/*
Runtime: 712 ms, faster than 70.43% of C++ online submissions for Process Tasks Using Servers.
Memory Usage: 123.2 MB, less than 61.78% of C++ online submissions for Process Tasks Using Servers.
*/
class Solution {
public:
    vector<int> assignTasks(vector<int>& servers, vector<int>& tasks) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> > processing;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > idle;
        
        for(int i = 0; i<servers.size(); i++) {
            idle.emplace(servers[i],i);
        }
        int time = 0;
        
        auto skipTime = [&](){
            while(!processing.empty() && processing.top().first==time) {
                auto&& [_,index] = processing.top();
                idle.emplace(servers[index], index);
                processing.pop();
            }
        };
        
        vector<int> ans;
        for(int i = 0; i<tasks.size(); i++) {
            time = max(time,i);
            skipTime();
            if(idle.empty()) {
                time = processing.top().first;
                skipTime();
            }
            
            auto&& [_,index] = idle.top();
            ans.push_back(index);
            processing.emplace(tasks[i]+time, index);
            idle.pop();
        }
        return ans;
    }    
};