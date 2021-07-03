/*
This is not satisfying because I just learnt red-black tree a few minutes ago.
I will make a better version later.
Runtime: 1600 ms
Memory Usage: 31.8 MB
*/


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,bool> nums_map;
        int maxNum = 0;
        for(int num:nums){
            nums_map[num]=true;
        }
        
        for(int num:nums){
            if(nums_map.find(num-1) == nums_map.end()){
                int largest = num+1;
                while(nums_map.find(largest)!=nums_map.end()){
                    largest+=1;
                }
                 maxNum = max(maxNum,largest-num);
                
            } 
        }     
        
       return maxNum; 
    }
};