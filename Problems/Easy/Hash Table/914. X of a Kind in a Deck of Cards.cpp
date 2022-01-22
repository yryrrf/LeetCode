/*
Runtime: 33 ms, faster than 12.00% of C++ online submissions for X of a Kind in a Deck of Cards.
Memory Usage: 17.4 MB, less than 88.21% of C++ online submissions for X of a Kind in a Deck of Cards.
*/
class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> map;
        for(int n:deck){
            map[n]++;
        }
        int minNum = INT_MAX;
        for(auto it:map){
            minNum = min(it.second,minNum);
        }
        if(minNum<2) return false;
        bool ans = false;
        for(int i = 2; i<=minNum; i++){
            bool flag = true;
            for(auto it:map){
                if(it.second%i!=0) flag = false;
            }
            ans = flag || ans;
        }
        return ans;
    }
};