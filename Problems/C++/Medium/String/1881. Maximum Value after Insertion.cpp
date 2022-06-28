/*
Runtime: 124 ms, faster than 30.18% of C++ online submissions for Maximum Value after Insertion.
Memory Usage: 38.3 MB, less than 5.92% of C++ online submissions for Maximum Value after Insertion.
*/
class Solution {
public:
    string maxValue(string n, int x) {
        if(n[0]=='-') {
            for(int i = 0; i<n.size(); i++) {
                if(x<n[i]-'0') {
                    return insert(n,i,x);
                }
            }
        }else {
            for(int i = 0; i<n.size(); i++) {
                if(x>n[i]-'0') {
                   return insert(n,i,x); 
                }
            }
        }
        n+=(char) x+'0';
        return n;
    }
    
    string insert(string n, int index, int x) {
        string tmp = "";
        for(int i = 0; i<n.size(); i++){
            if(i==index) tmp+=(char) x+'0';
            tmp+=n[i];
        }
        return tmp;
    }
    
};