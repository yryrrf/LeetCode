/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Defanging an IP Address.
Memory Usage: 6.1 MB, less than 9.32% of C++ online submissions for Defanging an IP Address.
*/
class Solution {
public:
    string defangIPaddr(string address) {
        string result;
        for(int i = 0;i<address.size();i++){
            if(address[i]=='.') {
                result += "[.]";
                continue;
            }
            result +=address[i];
        }
        return result;
    }
};