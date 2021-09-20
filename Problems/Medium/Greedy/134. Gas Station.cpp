/*
Runtime: 3 ms, faster than 88.69% of C++ online submissions for Gas Station.
Memory Usage: 9.6 MB, less than 99.55% of C++ online submissions for Gas Station.
*/
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gasSum = 0;
        int minSum = INT_MAX;
        int result = -1;
        
        for(int i = 0; i<gas.size(); i++){
            gasSum += gas[i] - cost[i];
            if(gasSum < minSum){
                result = i;
                minSum = gasSum;
            }
        }
        
        if(gasSum >= 0) return result==gas.size()-1?0:result+1;
        
        return -1;
    }
};