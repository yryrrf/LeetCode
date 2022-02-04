/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Rings and Rods.
Memory Usage: 6.4 MB, less than 32.59% of C++ online submissions for Rings and Rods.
*/
class Solution {
public:
    int countPoints(string rings) {
        unordered_map<int,vector<int>> um;
        for(int i = 0; i<rings.size(); i+=2){
            int option = 2;
            if(rings[i]=='R') option = 0;
            else if(rings[i]=='G') option = 1;
            if(!um.count(rings[i+1]-'0')){
                um[rings[i+1]-'0'] = vector<int>{0,0,0};
            }
            auto& it = um[rings[i+1]-'0'];
            it[option] = 1;
        }
        int ans = 0;
        for(auto it:um){
            if(it.second == vector<int>{1,1,1}) ans++;
        }
        return ans;
    }
};