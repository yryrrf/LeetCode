/*
Runtime: 231 ms, faster than 35.37% of C++ online submissions for Maximum Number of Weeks for Which You Can Work.
Memory Usage: 75.6 MB, less than 14.25% of C++ online submissions for Maximum Number of Weeks for Which You Can Work.
*/
class Solution {
public:
    long long numberOfWeeks(vector<int>& milestones) {
        int largest = 0;
        long long sum = 0;
        for(int i = 0; i<milestones.size(); i++) {
            largest = max(largest, milestones[i]);
            sum += milestones[i];
        }
        if(largest>sum-largest+1) {
            return (sum-largest)*2+1;
        }
        return sum;
    }
};