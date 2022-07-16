/*
Runtime: 63 ms, faster than 96.34% of C++ online submissions for Move Pieces to Obtain a String.
Memory Usage: 18.9 MB, less than 92.41% of C++ online submissions for Move Pieces to Obtain a String.
*/
class Solution {
public:
    bool canChange(string start, string target) {
        int i = 0, j = 0, n = start.size();
        while(i<n || j<n) {
            while(i<n && start[i] == '_') i++;
            while(j<n && target[j] == '_') j++;
            if(i==n || j==n) {
                break;
            }
            if(start[i] != target[j]) return false;
            if(start[i] == 'L' && i<j) return false;
            if(start[i] == 'R' && i>j) return false;
            i++;
            j++;
        }
        return i==n && j==n;
    }
};

