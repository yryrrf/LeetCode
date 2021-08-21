/*
Runtime: 4 ms, faster than 74.15% of C++ online submissions for Longest Common Prefix.
Memory Usage: 9.6 MB, less than 15.25% of C++ online submissions for Longest Common Prefix.
*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = strs[0];
        for(int i = 1;i<strs.size();i++){
            if(result=="") return "";
            result = prefixDeter(result,strs[i]);
        }
        return result;
    }
    
    string prefixDeter(string string1, string string2){
        int length = min(string1.size(),string2.size());
        int index = 0;
        while(index < length and string1[index]==string2[index]){
            index++;
        }
        return string1.substr(0,index);
    }
};