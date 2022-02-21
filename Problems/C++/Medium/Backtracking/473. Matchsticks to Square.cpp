/*
Runtime: 468 ms, faster than 14.34% of C++ online submissions for Matchsticks to Square.
Memory Usage: 9.8 MB, less than 41.01% of C++ online submissions for Matchsticks to Square.
*/
class Solution {
public:
    bool makesquare(vector<int>& matchsticks) {
        int total = 0;
        
        for(int num:matchsticks){
            total+=num;
        }
        if(total%4) return false;
        if(!total) return false;
        sort(matchsticks.rbegin(),matchsticks.rend());
        vector<int> square = {0,0,0,0};
        return dp(matchsticks,matchsticks.size()-1,total/4,square);

    }
private:
    bool dp(vector<int>& matchsticks, int index, int average, vector<int>& square){
        if(index<0) {
            if(square[0]==square[1] and square[1]== square[2] and square[2] == square[3]) return true;
        return false;
        }
        
        for(int i = 0; i<square.size();i++){
            if(matchsticks[index] + square[i] > average or (i>0 and square[i]==square[i-1])){
                continue;
            }
            square[i]+=matchsticks[index];
            if(dp(matchsticks,index-1,average,square)) return true;
            square[i] -= matchsticks[index];
            
        }

        return 0;
    }
    
    
    
    
};