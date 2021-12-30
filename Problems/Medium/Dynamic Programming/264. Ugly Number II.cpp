/*
Runtime: 12 ms, faster than 53.45% of C++ online submissions for Ugly Number II.
Memory Usage: 10 MB, less than 24.29% of C++ online submissions for Ugly Number II.
*/
class Solution {
public:    
    int nthUglyNumber(int n) {
        vector<int> ans(n+1);
        ans[1] = 1;
        vector<int> factors = {1,1,1};
        for(int i = 2; i<=n; i++){
            int n1 = ans[factors[0]]*2, n2 = ans[factors[1]]*3, n3 = ans[factors[2]]*5;
            int num = min(min(n1,n2),n3);
            ans[i] = num;
            if(n1==num) factors[0]++;
            if(n2==num) factors[1]++;
            if(n3==num) factors[2]++;
            ans.emplace_back(num);
        }
        return ans[ans.size()-1];
    }
};
