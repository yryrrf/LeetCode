/*
Runtime: 13 ms, faster than 6.11% of C++ online submissions for H-Index.
Memory Usage: 8.6 MB, less than 43.38% of C++ online submissions for H-Index.
*/
class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int ans = 0;
        for(int i = citations.size()-1; i>=0 && citations[i]>ans; --i){
            ans = citations.size()-i;

        }
        return ans;
    }
};
