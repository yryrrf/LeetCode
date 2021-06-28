/*
Runtime: 120 ms, faster than 47.61% of C++ online submissions for Minimum Number of Operations to Move All Balls to Each Box.
Memory Usage: 9.4 MB, less than 35.74% of C++ online submissions for Minimum Number of Operations to Move All Balls to Each Box.
*/
class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> result;
        int sum;
        for(int i = 0;i<n;i++){
            sum=0;
            for(int j = 0;j<n;j++){
                if(boxes[j]=='1') sum += abs(j-i);
            }
            result.push_back(sum);
        }
        return result; 
    }
};