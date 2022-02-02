/*
Runtime: 9 ms, faster than 57.22% of C++ online submissions for Final Value of Variable After Performing Operations.
Memory Usage: 13.9 MB, less than 99.88% of C++ online submissions for Final Value of Variable After Performing Operations.
*/
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;
        for(int i = 0; i<operations.size(); i++){
            if(operations[i][0]=='+' || operations[i][1]=='+'){
                ans++;
            }else{
                ans--;
            }
        }
        return ans;
    }
};