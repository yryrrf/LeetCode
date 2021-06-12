/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Kids With the Greatest Number of Candies.
Memory Usage: 8.8 MB, less than 83.22% of C++ online submissions for Kids With the Greatest Number of Candies.
*/
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxNum = *max_element(begin(candies),end(candies));
        vector<bool> result;
        for (int i = 0; i<candies.size();i++){
            result.push_back((candies[i]+extraCandies)>=maxNum?true:false);
        }
        return result;
    }
};