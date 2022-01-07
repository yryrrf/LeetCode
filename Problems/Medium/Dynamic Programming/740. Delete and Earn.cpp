/*
Runtime: 9 ms, faster than 37.44% of C++ online submissions for Delete and Earn.
Memory Usage: 9.2 MB, less than 89.87% of C++ online submissions for Delete and Earn.
*/
class Solution {
public:
    int dp(vector<int>& vec){
        if(vec.size()==1){
            return vec[0];
        }
        int first = vec[0];
        int second = max(first,vec[1]);
        for(int i = 2; i<vec.size(); i++){
            int tmp = max(first+vec[i], second);
            first = second;
            second = tmp;
        }
        return second;
    }
    
    int deleteAndEarn(vector<int>& nums) {
        vector<int> vec;
        sort(nums.begin(),nums.end());
        
        int ans = 0;
        vec.push_back(nums[0]);
        
        for(int i = 1 ; i<nums.size(); i++){
            int num = nums[i];
            if(num == nums[i-1]){
                vec[vec.size()-1]+=num;
            }else if(num == nums[i-1]+1){
                vec.push_back(num);
            }else{
                ans += dp(vec);
                vec = {num};
            }
        }
        ans += dp(vec);
        return ans;
    }
};