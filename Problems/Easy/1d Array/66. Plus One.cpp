/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Plus One.
Memory Usage: 8.6 MB, less than 84.52% of C++ online submissions for Plus One.
*/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size()-1;i>=0;i--){
           if(digits[i]!=9) {
               digits[i]+=1;
               return digits;
           }else{
               digits[i]=0;
           }         
        }
        vector<int> result(digits.size()+1,0);
        result[0]=1;      
        return result;
    }
};