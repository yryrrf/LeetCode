/*
Runtime: 4 ms, faster than 96.19% of C++ online submissions for Largest Number.
Memory Usage: 11 MB, less than 97.10% of C++ online submissions for Largest Number.
*/
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),[](const int &a, const int &b){
            long a_Place=10,b_Place=10;
            while(a_Place<=a){
                a_Place*=10;
            }
            
            while(b_Place<=b){
                b_Place*=10;
            }
            return a*b_Place+b > b*a_Place+a;
        });
        if(nums[0]==0) return "0";
        string result;
        for(int &num:nums){
            result+=to_string(num);
        }
        
        return result;
    }
};