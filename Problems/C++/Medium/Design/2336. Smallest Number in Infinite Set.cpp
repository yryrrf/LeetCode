/*
Runtime: 71 ms, faster than 99.58% of C++ online submissions for Smallest Number in Infinite Set.
Memory Usage: 35.5 MB, less than 87.51% of C++ online submissions for Smallest Number in Infinite Set.
*/
class SmallestInfiniteSet {
public:
    set<int> s;
    int curr;
    SmallestInfiniteSet() {
        curr = 1;
    }
    
    int popSmallest() {
        if(s.size()){
            int ans = *s.begin();
            s.erase(ans);
            return ans;
        }
        return curr++;
    }
    
    void addBack(int num) {
        if(num<curr) {
            s.insert(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */