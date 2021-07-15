/*
Runtime: 60 ms, faster than 69.80% of C++ online submissions for Minimum Deletions to Make Character Frequencies Unique.
Memory Usage: 17.1 MB, less than 94.87% of C++ online submissions for Minimum Deletions to Make Character Frequencies Unique.
*/
class Solution {
public:
    int minDeletions(string s) {
        vector<int> length(26,0);
        for(char c :s){
            length[c-'a']++;
        }
        sort(length.begin(),length.end());
        int result=0;
        for(int i = 0;i<26-1;i++){
            if(length[i]==0) continue;
            if(length[i]>=length[i+1]){
                length[i]--;
                result++;
                i=0;
            }
        }
        return result;
    }
};