/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Bulls and Cows.
Memory Usage: 6.5 MB, less than 75.94% of C++ online submissions for Bulls and Cows.
*/
class Solution {
public:
    string getHint(string secret, string guess) {
        vector<int> g(10),s(10);
        int A = 0;
        for(int i = 0; i<secret.size(); i++){
            if(secret[i]==guess[i]){
                A++;
            }else{
                g[guess[i]-'0']++;
                s[secret[i]-'0']++;
            }
        }
        int B = 0;
        for(int i = 0; i<10 ;i++){
            B+=min(g[i],s[i]);
        }
        
        return to_string(A) + "A" + to_string(B) + "B";
    }
};