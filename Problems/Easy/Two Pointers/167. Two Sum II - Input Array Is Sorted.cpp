/*
Runtime: 6 ms, faster than 33.01% of C++ online submissions for Two Sum II - Input Array Is Sorted.
Memory Usage: 9.7 MB, less than 43.24% of C++ online submissions for Two Sum II - Input Array Is Sorted.
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int p1 = 0, p2 = numbers.size()-1;
        int sum = numbers[p1] + numbers[p2];
        while(sum != target){
            if(sum<target){
                p1++;
            }else{
                p2--;
            }
            sum = numbers[p1] + numbers[p2];
        }
        return {p1+1,p2+1};
    }
};