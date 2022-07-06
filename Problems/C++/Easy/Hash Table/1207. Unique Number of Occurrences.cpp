/*
Runtime: 5 ms, faster than 48.15% of C++ online submissions for Unique Number of Occurrences.
Memory Usage: 8.2 MB, less than 25.81% of C++ online submissions for Unique Number of Occurrences.
*/
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> um;
        for(int i = 0; i<arr.size(); i++) {
            um[arr[i]]++;
        }
        unordered_set<int> us;
        for(auto it:um) {
            if(us.count(it.second)) return false;
            us.insert(it.second);
        }
        return true;
    }
};