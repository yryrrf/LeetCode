/*
Runtime: 376 ms, faster than 79.97% of C++ online submissions for Range Sum Query - Mutable.
Memory Usage: 152.3 MB, less than 40.83% of C++ online submissions for Range Sum Query - Mutable.
*/
class NumArray {
public:
    vector<int> tree;
    int len;
    NumArray(vector<int>& nums) {
        len = nums.size();
        vector<int> array(len*2);
        this->tree = array;
        for(int i = len, j = 0;i<tree.size();i++,j++){
            tree[i] = nums[j];
        }
        
        for(int i = len-1;i>0;i--){
            tree[i]=tree[i*2]+tree[i*2+1];
        }
    }
    
    void update(int index, int val) {
        index+=len;
        tree[index] = val;
        while(index>0){
            if(index%2!=0){
                index-=1;
            } 
            tree[index/2]=tree[index]+tree[index+1];
            index/=2;
        }   
    }
    
    int sumRange(int left, int right) {
        int sum=0;
        left+=len;
        right+=len;
        while(left<=right){
            if(left%2==1){
                sum += tree[left];
                left++;
            }
            if ((right % 2) == 0) {
                sum += tree[right];
                right--;
                }
            left /= 2;
            right /= 2;
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */