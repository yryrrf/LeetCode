/*
Runtime: 20 ms, faster than 44.35% of C++ online submissions for Top K Frequent Words.
Memory Usage: 12.4 MB, less than 95.86% of C++ online submissions for Top K Frequent Words.
*/
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> um;
        for(string s:words) {
            um[s]++;
        }
        vector<string> vec;
        for(auto it:um) {
            vec.push_back(it.first);
        }
        sort(vec.begin(), vec.end(), [&](const string& s1, const string& s2) -> bool{return um[s1]==um[s2]?s1<s2:um[s1]>um[s2];});
        for(int i = vec.size()-1; i>=k; i--) {
            vec.pop_back();
        }
        return vec;
    }
};