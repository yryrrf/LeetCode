/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Compare Version Numbers.
Memory Usage: 6.1 MB, less than 96.29% of C++ online submissions for Compare Version Numbers.
*/
class Solution {
public:
    int compareVersion(string version1, string version2) {
        int n = version1.size(),m = version2.size();
        int i = 0, j = 0;
        while(i<n || j<m){
            int x = 0;
            for(;i < n &&version1[i]!='.';i++){
                x = x*10;
                x+=version1[i]-'0';
            }
            int y = 0;
            for(;j < m && version2[j]!='.';j++){
                y*=10;
                y+=version2[j]-'0';
            }
            if(x!=y){
                return x<y?-1:1;
            }
            i++;
            j++;
        }
        return 0;
    }
};