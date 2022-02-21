/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Map Sum Pairs.
Memory Usage: 7.8 MB, less than 87.28% of C++ online submissions for Map Sum Pairs.
*/
class MapSum {
public:
    /** Initialize your data structure here. */
    map<string,int> mp;
    MapSum() {
        
    }
    
    void insert(string key, int val) {
        mp[key] = val;
    }
    
    int sum(string prefix) {
        int ans = 0;
        for(auto it : mp){
            if(it.first.find(prefix)==0){
                ans+=it.second;
            }
        }
        return ans;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */