/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Time Needed to Buy Tickets.
Memory Usage: 7.6 MB, less than 91.29% of C++ online submissions for Time Needed to Buy Tickets.
*/
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans = 0;
        while(tickets[k]>0){
            for(int i = 0; i<tickets.size(); i++){
                if(tickets[i]>0){
                    tickets[i]--;
                    ans++;
                }
                if(i==k && tickets[k]==0) break;
            }
        }
        return ans;
    }
};