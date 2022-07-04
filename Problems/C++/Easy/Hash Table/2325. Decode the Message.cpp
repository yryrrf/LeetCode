/*
Runtime: 8 ms, faster than 60.00% of C++ online submissions for Decode the Message.
Memory Usage: 7 MB, less than 60.00% of C++ online submissions for Decode the Message.
*/
class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char>  um;
        int tmp = 0;
        for(int i = 0; i<key.size(); i++) {
            if(key[i]!=' ' && !um.count(key[i])) {
                um[key[i]] = tmp+'a';
                tmp++;
            }
        }
        string ans = "";
        for(int i = 0; i<message.size(); i++) {
            if(message[i]==' ') {
                ans+=' ';
            }else{
                ans+=um[message[i]];
            }
        }
        return ans;
    }
};