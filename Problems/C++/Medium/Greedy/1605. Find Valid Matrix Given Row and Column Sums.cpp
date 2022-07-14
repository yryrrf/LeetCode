/*
Runtime: 108 ms, faster than 69.21% of C++ online submissions for Find Valid Matrix Given Row and Column Sums.
Memory Usage: 33.6 MB, less than 8.51% of C++ online submissions for Find Valid Matrix Given Row and Column Sums.
*/
class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        vector<vector<int>> ans(rowSum.size(), vector<int>(colSum.size()));
		vector<long long> sum(colSum.size(),0);
        
        for(int i = 0; i<ans.size(); i++) {
            ans[i][0] = rowSum[i];
            sum[0]+=rowSum[i];
        }
        for(int j = 0; j<ans[0].size(); j++) {
            int i = 0;
            int tmp = 0;
            while(sum[j]>colSum[j] && i<ans.size()) {
                tmp+=ans[i][j];
                if(tmp>colSum[j]) {
                    int diff = tmp - colSum[j];
                    ans[i][j+1] += diff;
                    ans[i][j] -= diff;
                    sum[j+1] +=diff;
                    sum[j]-= diff;
                    tmp = colSum[j];
                }
                i++;
            }
        }
        return ans;
    }
};
