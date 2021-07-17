/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Number of Good Pairs.
Memory Usage: 7.3 MB, less than 58.18% of C++ online submissions for Number of Good Pairs.
*/
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int> result(101);
        for(int num:nums){
            result[num]+=1;
        }
        int sum=0;
        for(int i = 0;i<101;i++){
            sum+=(result[i]>=2)?result[i]*(result[i]-1)/2:0;
        }
        return sum;
    }
};