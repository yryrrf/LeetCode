/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Custom Sort String.
Memory Usage: 6.1 MB, less than 94.06% of C++ online submissions for Custom Sort String.
*/
class Solution {
public:
    string customSortString(string order, string str) {
        unordered_map<char,int> um;
        for(int i = 0;i<str.size();i++){
            if(um.count(str[i])){
                um[str[i]]+=1;
            }else{
                um[str[i]]=1;
            }
        }
        string result;
        for(char c : order){
            if(um.count(c)){
                for(int i = um[c];i>0;i--){
                    result+=c;
                }
                um.erase(c);
            }
        }
        for (auto& it: um) {
            for(int i = it.second;i>0;i--){
                result+=it.first;
            }
        }
        return result;
    }
};