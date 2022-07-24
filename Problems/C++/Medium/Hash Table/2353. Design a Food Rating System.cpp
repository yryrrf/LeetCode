/*
Runtime: 918 ms, faster than 33.33% of C++ online submissions for Design a Food Rating System.
Memory Usage: 165.9 MB, less than 33.33% of C++ online submissions for Design a Food Rating System.
*/
class FoodRatings {
public:
    unordered_map<string,set<pair<int,string>>> hr;
    unordered_map<string,int> rating;
    unordered_map<string,string> type;
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for(int i = 0; i<foods.size(); i++) {
            type[foods[i]] = cuisines[i];
            rating[foods[i]] = -ratings[i];
            hr[cuisines[i]].insert({-ratings[i],foods[i]});
        }
    }
    
    void changeRating(string food, int newRating) {
        int tmp = rating[food];
        string t = type[food];
        hr[t].erase({tmp,food});
        hr[t].insert({-newRating,food});
        rating[food] = -newRating;
    }
    
    string highestRated(string cuisine) {
        return hr[cuisine].begin()->second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */