/*
Runtime: 7 ms, faster than 99.48% of C++ online submissions for Asteroid Collision.
Memory Usage: 17.9 MB, less than 38.57% of C++ online submissions for Asteroid Collision.
*/
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stk;
        for(int n:asteroids) {
            bool flag = true;
            while(!stk.empty() && n<0 && stk.top()>0) {
                if(stk.top() < -n) {
                    stk.pop();
                    continue;
                } else if (stk.top() == -n){
                    stk.pop();
                }
                flag = false;
                break;
            }
            if(flag) stk.push(n);
        }
        vector<int> ans(stk.size(), 0);
        for(int i = ans.size()-1; i>=0; i--) {
            ans[i] = stk.top();
            cout<<stk.top()<<endl;
            stk.pop();
        } 
        return ans;
    }
};