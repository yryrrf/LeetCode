/*
Runtime: 318 ms, faster than 6.96% of C++ online submissions for My Calendar I.
Memory Usage: 38.3 MB, less than 75.15% of C++ online submissions for My Calendar I.
*/
class MyCalendar {
public:
    unordered_map<int,int> Calendar;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(auto it:Calendar){
            if((start>=it.first && start<it.second) || (end>it.first && end<=it.second)){
                return false;
            }
            if(start<=it.first && end>=it.second) return false;
        }
        Calendar.emplace(start,end);
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */