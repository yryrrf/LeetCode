/*
Runtime: 24 ms, faster than 43.23% of C++ online submissions for Candy.
Memory Usage: 17.7 MB, less than 79.65% of C++ online submissions for Candy.
*/
class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> result(ratings.size(),1);
        for(int i = 1; i<result.size(); i++){
            if(ratings[i]>ratings[i-1]) result[i] = result[i-1]+1;
        }
        for(int i = ratings.size()-2; i>=0; i--){
            if(ratings[i]>ratings[i+1] and result[i]<=result[i+1]) result[i] = result[i+1]+1;
        }
        int sum = 0;
        for(int i:result) sum+=i;
        return sum;
    }
};