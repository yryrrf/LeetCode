/*
Runtime: 741 ms, faster than 42.04% of C++ online submissions for Stock Price Fluctuation .
Memory Usage: 167.4 MB, less than 51.59% of C++ online submissions for Stock Price Fluctuation .
*/
class StockPrice {
public:
    int maxPrice = INT_MIN;
    int minPrice = INT_MAX;
    unordered_map<int,int> um;
    multiset<int> prices;
    int currentTime;
    
    StockPrice() {
        currentTime = 0;
    }
    
    void update(int timestamp, int price) {
        currentTime = max(timestamp,currentTime);
        int prePrice = um.count(timestamp)?um[timestamp]:0;
        um[timestamp] = price;
        if(prePrice>0){
            auto it  = prices.find(prePrice);
            if(it!=prices.end()){
                prices.erase(it);
            }
        }
        
        prices.emplace(price);
    }
    
    int current() {
        return um[currentTime];
    }
    
    int maximum() {
        return *prices.rbegin();
    }
    
    int minimum() {
        return *prices.begin();
    }
};

/**
 * Your StockPrice object will be instantiated and called as such:
 * StockPrice* obj = new StockPrice();
 * obj->update(timestamp,price);
 * int param_2 = obj->current();
 * int param_3 = obj->maximum();
 * int param_4 = obj->minimum();
 */