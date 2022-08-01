/*
Runtime: 27 ms, faster than 98.89% of C++ online submissions for Employee Importance.
Memory Usage: 14.3 MB, less than 48.04% of C++ online submissions for Employee Importance.
*/
/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    unordered_map<int, Employee*> um;
    
    int getImportance(vector<Employee*> employees, int id) {
        for(int i = 0; i<employees.size(); i++) {
            um[employees[i]->id] = employees[i];
        }
        int ans = dfs(id);
        return ans;
    }
    
    int dfs(int id){
        Employee* emp = um[id];
        vector<int> sub = emp->subordinates;
        int ans = emp->importance;
        for(int& s:sub) {
            ans+=dfs(s);
        }
        return ans;
    }
};