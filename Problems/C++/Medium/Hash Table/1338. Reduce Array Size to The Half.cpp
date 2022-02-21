/*
Runtime: 180 ms, faster than 63.53% of C++ online submissions for Reduce Array Size to The Half.
Memory Usage: 78.2 MB, less than 67.00% of C++ online submissions for Reduce Array Size to The Half.
*/
class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> um;
        for(int num:arr){
            um[num]+=1;
        }
        vector<int> record;
        for(auto &[u,v]:um){
            record.push_back(v);
        }
        sort(record.rbegin(),record.rend());
        int sum = 0;
        int n = 0;
        for(int num:record){
            sum+=num;
            n++;
            if(sum>=arr.size()/2){
                return n;
            }
        }
        return n;   
    }
};