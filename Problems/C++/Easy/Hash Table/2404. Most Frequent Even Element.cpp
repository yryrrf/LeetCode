/*
Runtime: 157 ms, faster than 73.26% of C++ online submissions for Most Frequent Even Element.
Memory Usage: 38.1 MB, less than 80.89% of C++ online submissions for Most Frequent Even Element.
*/
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int maxEle = -1;
        int maxCount = 0;
        unordered_map<int,int> um;
        for(int num:nums) {
            if(num%2) continue;
            um[num]++;
            if(um[num]>maxCount || (um[num]==maxCount && (num<maxEle || maxEle==-1))) {
                maxEle = num;
                maxCount = um[num];
            }
        }
        return maxEle;
    }
};