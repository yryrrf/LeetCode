/*
Runtime: 32 ms, faster than 27.34% of C++ online submissions for Minimum Window Substring.
Memory Usage: 7.7 MB, less than 80.85% of C++ online submissions for Minimum Window Substring.
*/
class Solution {
public:
    unordered_map<char,int> map;
    string minWindow(string s, string t) {        
        int left=0,right=-1,minResult = INT_MAX;
        int ansL=-1;
        for(char c:t) map[c]++;
        
        while(right<int(s.size())){
            right++;
            if(t.find(s[right])!=string::npos){
                map[s[right]]--;
            }
            while(check() and left<=right){
                if(right - left + 1 < minResult){
                    ansL = left;
                    minResult = right - left +1;
                }
                if(t.find(s[left])!=string::npos){
                    map[s[left]]++;
                }
                left++;
            } 
        }
		return ansL==-1?"":s.substr(ansL,minResult);
    }
    
    bool check(){
        for(auto & it:map){
            if(it.second>0) {
                return false;
            } 
        }
        return true;
    }  
};