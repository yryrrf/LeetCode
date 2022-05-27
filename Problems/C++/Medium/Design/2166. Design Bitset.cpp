/*
Runtime: 668 ms, faster than 33.85% of C++ online submissions for Design Bitset.
Memory Usage: 198.7 MB, less than 16.54% of C++ online submissions for Design
*/
class Bitset {
public:
    vector<int> ans;
    int reversed = 0;
    int oneCnt = 0;
    
    Bitset(int size) {
        ans = vector<int>(size,0);
    }
    
    void fix(int idx) {
        if(ans[idx]^reversed==0){
            oneCnt++;
            ans[idx] ^= 1;
        } 
        
    }
    
    void unfix(int idx) {
        if(ans[idx]^reversed==1) {
            oneCnt--;
            ans[idx] ^= 1;
        }
    }
    
    void flip() {
        reversed ^=1;
        oneCnt = ans.size() - oneCnt;
    }
    
    bool all() {
        return oneCnt==ans.size();
    }
    
    bool one() {
        return oneCnt>0;
    }
    
    int count() {
        return oneCnt;
        
    }
    
    string toString() {
        string tmp ="";
        for(int n:ans){
            tmp+=((n^reversed)+'0');
        }
        return tmp;
    }
};

/**
 * Your Bitset object will be instantiated and called as such:
 * Bitset* obj = new Bitset(size);
 * obj->fix(idx);
 * obj->unfix(idx);
 * obj->flip();
 * bool param_4 = obj->all();
 * bool param_5 = obj->one();
 * int param_6 = obj->count();
 * string param_7 = obj->toString();
 */