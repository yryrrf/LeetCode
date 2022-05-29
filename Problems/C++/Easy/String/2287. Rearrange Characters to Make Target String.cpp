/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Rearrange Characters to Make Target String.
Memory Usage: 6.4 MB, less than 33.33% of C++ online submissions for Rearrange Characters to Make Target String.
*/
class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int> um;
        for(int i = 0;i<s.size(); i++){
            um[s[i]]++;
        }
        int ans = 0;
        bool addAns = true;
        while(addAns){
            for(int i = 0; i<target.size(); i++){
                if(um.count(target[i]) && um[target[i]]>0){
                    um[target[i]]--;
                }else{
                    addAns = false;
                    break;
                }
            }
            
            if(addAns){
                ans++;
            }
            
        }
        return ans;
        
    }
};