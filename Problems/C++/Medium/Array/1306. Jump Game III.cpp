/*
Runtime: 73 ms, faster than 13.69% of C++ online submissions for Jump Game III.
Memory Usage: 31.1 MB, less than 86.07% of C++ online submissions for Jump Game III.
*/
class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        if (arr[start] == 0) {
            return true;
        }
        
        queue<int> q;
        vector<bool> jumped(arr.size());
        q.push(start);
        jumped[start] = true;
        
        while(!q.empty()){
            int i = q.front();
            q.pop();
            if(i - arr[i] >= 0 and !jumped[i-arr[i]]){
                if(arr[i-arr[i]]==0) return true;
                jumped[i-arr[i]] = true;
                q.push(i-arr[i]);
            }
            
            if(i+arr[i] < arr.size() and !jumped[i+arr[i]]){
                if(arr[i+arr[i]]==0) return true;
                jumped[i+arr[i]] = true;
                q.push(i+arr[i]);
            }       
        }
        return false;
        
    }
};