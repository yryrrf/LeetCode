/*
Runtime: 17 ms, faster than 98.32% of C++ online submissions for Range Sum Query - Immutable.
Memory Usage: 17.1 MB, less than 31.33% of C++ online submissions for Range Sum Query - Immutable.
*/
class NumArray {
public:
    vector<int> sum;
    NumArray(vector<int>& nums) {
        if(nums.size()==0) return;
        sum.push_back(nums[0]);
        for(int i = 1; i<nums.size(); i++){
            sum.push_back(sum[i-1]+nums[i]);
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0) return sum[right];
        return sum[right] - sum[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */