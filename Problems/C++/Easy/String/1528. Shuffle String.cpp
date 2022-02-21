/*
Runtime: 4 ms, faster than 94.97% of C++ online submissions for Shuffle String.
Memory Usage: 16.3 MB, less than 11.42% of C++ online submissions for Shuffle String.
*/
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int length=indices.size();
        vector<string> data(length);
        string result;
        for(int i = 0;i<length;i++){
            data[indices[i]]=s[i];
        }
        for(int i =0;i<length;i++){
            result+=data[i];
        }
        return result;
    }
};