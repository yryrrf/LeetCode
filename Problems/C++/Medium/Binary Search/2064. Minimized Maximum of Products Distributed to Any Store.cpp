/*
Runtime: 253 ms, faster than 68.56% of C++ online submissions for Minimized Maximum of Products Distributed to Any Store.
Memory Usage: 84.4 MB, less than 79.75% of C++ online submissions for Minimized Maximum of Products Distributed to Any Store.
*/
class Solution {
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        int l =1, r = *max_element(quantities.begin(),quantities.end());
        while(l<r){
            int mid = (l+r)/2;
            int cnt = 0;
            for(const int& q:quantities){
                cnt+=q/mid;
                if(q%mid) cnt++;
            }
            if(cnt>n) l = mid+1;
            else r = mid;
        }
        return l;
    }
};