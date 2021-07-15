/*
Runtime: 32 ms, faster than 93.11% of C++ online submissions for Find K Closest Elements.
Memory Usage: 31.6 MB, less than 64.24% of C++ online submissions for Find K Closest Elements.
*/
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> result;
        int left = 0;
        int right = arr.size()-1;
        while(right-left+1>k){
            if(abs(arr[left]-x)>abs(arr[right]-x)){
                left++;
            }else{
                right--;
            }    
        }
        for(;left<=right;left++){
            result.push_back(arr[left]);
        }
        return result;
    }
};