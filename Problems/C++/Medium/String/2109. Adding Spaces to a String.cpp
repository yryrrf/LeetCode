/*
Runtime: 235 ms, faster than 25.93% of C++ online submissions for Adding Spaces to a String.
Memory Usage: 81.3 MB, less than 81.26% of C++ online submissions for Adding Spaces to a String.
*/
class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans = "";
        int index = 0;
        for(int i = 0; i<s.size(); i++){
            if(index<spaces.size() && i==spaces[index]){
                index++;
                ans+=' ';
            }
            ans+=s[i];
        }
        return ans;
    }
};