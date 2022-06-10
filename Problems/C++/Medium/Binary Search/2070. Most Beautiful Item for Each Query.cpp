/*
Runtime: 501 ms, faster than 60.56% of C++ online submissions for Most Beautiful Item for Each Query.
Memory Usage: 88.5 MB, less than 81.17% of C++ online submissions for Most Beautiful Item for Each Query.
*/
class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort(items.begin(), items.end());
        vector<int> ans;
        for (int i = 1; i < items.size(); ++i){
            items[i][1] = max(items[i][1], items[i-1][1]);
        }

        for(int query:queries){
            if(query<items[0][0]) {
                ans.push_back(0);
                continue;
            }
            int l = 0, r = items.size();
            int mid;
            while(l<r){
                mid = (l+r)/2;
                if(items[mid][0]>query){
                    r = mid;
                }else{
                    l = mid+1;
                }
            }
            ans.push_back(items[l-1][1]);
        }
        return ans;
    }
};
