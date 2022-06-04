/*
Runtime: 3 ms, faster than 85.55% of C++ online submissions for Partition Labels.
Memory Usage: 6.6 MB, less than 67.82% of C++ online submissions for Partition Labels.
*/
class Solution {
public:
    vector<int> partitionLabels(string s) {
        int array[26];
        for(int i = 0; i<s.size(); i++){
            array[s[i]-'a'] = i;
        }
        
        vector<int> ans;
        int start = 0,end = 0;
        for(int i = 0; i<s.size(); i++){
            end = max(end,array[s[i]-'a']);
            if(i == end){
                ans.push_back(i-start+1);
                start = i+1;
            }
        }
        return ans;
    }
};