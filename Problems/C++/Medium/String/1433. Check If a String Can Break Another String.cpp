/*
Runtime: 72 ms, faster than 73.01% of C++ online submissions for Check If a String Can Break Another String.
Memory Usage: 11.4 MB, less than 99.69% of C++ online submissions for Check If a String Can Break Another String.
*/
class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        bool flag1 = true, flag2 = true;
        for(int i = 0; i<s1.size(); i++){
            if(s2[i]<s1[i]){
                flag1 = false;
            }else if(s2[i]>s1[i]){
                flag2 = false;
            }
        }
        return flag1 || flag2;
    }
};