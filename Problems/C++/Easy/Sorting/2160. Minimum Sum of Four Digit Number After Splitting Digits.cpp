/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Minimum Sum of Four Digit Number After Splitting Digits.
Memory Usage: 6 MB, less than 70.76% of C++ online submissions for Minimum Sum of Four Digit Number After Splitting Digits.
*/
class Solution {
public:
    int minimumSum(int num) {
        vector<int> vec(2,0);
        vector<int> tmp;
        while(num!=0){
            if(num%10!=0){
                tmp.push_back(num%10);
            }
            num/=10;         
        }
        sort(tmp.begin(),tmp.end());
        for(int i = 0; i<tmp.size(); i++){
            cout<<tmp[i];
            if(vec[0]<vec[1]){
                vec[0]*=10;
                vec[0]+=tmp[i];
            }else{
                vec[1]*=10;
                vec[1]+=tmp[i];
            }
        }
        return  vec[0]+vec[1];
    }
};