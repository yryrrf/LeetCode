/*
Runtime: 5 ms, faster than 33.33% of C++ online submissions for Largest 3-Same-Digit Number in String.
Memory Usage: 6.6 MB, less than 33.33% of C++ online submissions for Largest 3-Same-Digit Number in String.
*/
class Solution {
public:
    string largestGoodInteger(string num) {
        int ans = -1;
        for(int i = 0; i<num.size(); i++){
            int j = i+1;
            int tmp = num[i]-'0';
            while(j<num.size() && j-i<3 && num[i]==num[j]){
                tmp*=10;
                tmp+=num[j]-'0';
                j++;
            }
            if(j-i==3)
            ans = max(ans,tmp);
            i=j-1;
            
        }
        return ans==-1?"": (ans==0?"000":to_string(ans));
    }
};