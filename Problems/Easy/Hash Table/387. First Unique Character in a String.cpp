/*
Runtime: 128 ms, faster than 5.15% of C++ online submissions for First Unique Character in a String.
Memory Usage: 11 MB, less than 14.48% of C++ online submissions for First Unique Character in a String.
*/
class Solution {
public:
    int firstUniqChar(string s) {
       unordered_map<char,int> um;
        queue<char> q;
        for(int i = 0; i<s.size();i++){
            if(!um.count(s[i])){
                um[s[i]]=i;
                q.push(s[i]);
            }else{
                um[s[i]] = -1;
                while(!q.empty() && um.count(q.front()) && um[q.front()] == -1){
                    q.pop();
                }
            }
        }
        return q.empty()?-1:um[q.front()];
    }
};