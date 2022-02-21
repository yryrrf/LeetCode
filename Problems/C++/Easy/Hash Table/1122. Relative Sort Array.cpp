/*
Runtime: 4 ms, faster than 70.23% of C++ online submissions for Relative Sort Array.
Memory Usage: 7.8 MB, less than 38.31% of C++ online submissions for Relative Sort Array.
*/
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> um;
        for(int n: arr1){
            um[n]++;
        }
        vector<int> ans;
        for(int n:arr2){
            while(um[n]>0){
                ans.push_back(n);
                um[n]--;
            }
        }
        vector<int> tmp;
        for(auto& it:um){
            while(it.second>0){
                it.second--;
                tmp.push_back(it.first);
            }
        }
        sort(tmp.begin(), tmp.end());
        for(int i = 0; i<tmp.size(); i++){
            ans.push_back(tmp[i]);
        }
        return ans;
    }
};