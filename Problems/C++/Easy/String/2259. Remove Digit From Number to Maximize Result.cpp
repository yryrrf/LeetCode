/*
Runtime: 4 ms, faster than 25.00% of C++ online submissions for Remove Digit From Number to Maximize Result.
Memory Usage: 5.9 MB, less than 100.00% of C++ online submissions for Remove Digit From Number to Maximize Result.
*/
class Solution {
public:
    string removeDigit(string number, char digit) {
        int index = -1;
        string ans = "";
        for(int i = number.size()-1; i>0; i--){
            if(number[i-1]==digit && number[i]>number[i-1]){
                index  = i-1;
            }
        }
        if(index != -1){
            for(int i = 0; i<number.size(); i++){
                if(i != index){
                    ans+=number[i];
                }
            }
        }else{
            bool tmp = true;
            for(int i = number.size()-1; i>=0; i--){
                if(tmp && number[i]==digit){
                    tmp = false;
                }else{
                    ans+=number[i];
                }
            }
            reverse(ans.begin(),ans.end());
        }
        return ans;
    }
};