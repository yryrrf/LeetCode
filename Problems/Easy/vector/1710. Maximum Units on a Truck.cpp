/*
Runtime: 44 ms, faster than 59.70% of C++ online submissions for Maximum Units on a Truck.
Memory Usage: 15.9 MB, less than 94.84% of C++ online submissions for Maximum Units on a Truck.
*/

class Solution {
public:
    bool static cmp(vector<int>& v1, vector<int>& v2){
        return v1[1]>v2[1];
    }
    
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int sum=0;
        sort(boxTypes.begin(),boxTypes.end(),cmp);
        for(int i = 0; i<boxTypes.size();i++){
            if(boxTypes[i][0]<truckSize){
                sum+=boxTypes[i][0]*boxTypes[i][1];
                truckSize-=boxTypes[i][0];
                continue;
            }
            sum+=truckSize*boxTypes[i][1];
            return sum;
        }    
        
        return sum;
    }
};