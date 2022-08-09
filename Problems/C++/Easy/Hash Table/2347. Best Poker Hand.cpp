/*
Runtime: 3 ms, faster than 61.50% of C++ online submissions for Best Poker Hand.
Memory Usage: 10.1 MB, less than 88.33% of C++ online submissions for Best Poker Hand.
*/
class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        int a[4] = {0,0,0,0};
        for(int i = 0; i<suits.size(); i++){
            a[suits[i]-'a'] ++;
            if(a[suits[i]-'a']==5) return "Flush";
        }
        int r[14] = {0};
        bool b = false;
        for(int i = 0; i<ranks.size(); i++) {
            r[ranks[i]] ++;
            if(r[ranks[i]]==3) return "Three of a Kind";
            if(r[ranks[i]]==2) b = true;
        }
        if(b) return "Pair";
        return "High Card";
    }
};