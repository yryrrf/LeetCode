/*
Runtime: 26 ms, faster than 65.23% of C++ online submissions for Minimum Number of Buckets Required to Collect Rainwater from Houses.
Memory Usage: 10.5 MB, less than 23.24% of C++ online submissions for Minimum Number of Buckets Required to Collect Rainwater from Houses.
*/
class Solution {
public:
    int minimumBuckets(string street) {
        int ans = 0;
        for(int i = 0; i<street.size(); i++) {
            if(street[i] == 'H') {
                if(i+1<street.size() && street[i+1]=='.') {
                    i+=2;
                    ans++;
                }else if(i-1>=0 && street[i-1] == '.'){
                    ans++;
                }else {
                    return -1;
                }
            }
        }
        return ans;
    }
};
