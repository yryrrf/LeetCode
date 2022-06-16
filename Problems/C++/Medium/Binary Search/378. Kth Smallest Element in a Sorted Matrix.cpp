/*
Runtime: 31 ms, faster than 91.06% of C++ online submissions for Kth Smallest Element in a Sorted Matrix.
Memory Usage: 13.1 MB, less than 93.20% of C++ online submissions for Kth Smallest Element in a Sorted Matrix.
*/
class Solution {
public:
    bool search(vector<vector<int>>& matrix, int mid, int k) {
        int i = matrix.size()-1;
        int j = 0;
        int cnt = 0;
        while(i>=0 && j<matrix.size()) {
            if(matrix[i][j]<=mid) {
                cnt+=i+1;
                j++;
            }else{
                i--;
            }
        }
        return cnt>=k;
    }
    
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int left = matrix[0][0];
        int right = matrix[matrix.size()-1][matrix.size()-1];
        while(left<right) {
            int mid = left + (right-left)/2;
            if(search(matrix, mid, k)){
                right = mid;
            }else{
                left = mid+1;
            }
        }
        
        return left;
    }
};