/*
Runtime: 59 ms, faster than 33.56% of C++ online submissions for Rearrange Words in a Sentence.
Memory Usage: 18.9 MB, less than 28.24% of C++ online submissions for Rearrange Words in a Sentence.
*/
class Solution {
public:
    vector<string> v;
    string arrangeWords(string text) {
        text[0] = tolower(text[0]);
        getSplit(text);
        stable_sort(v.begin(), v.end(), [&](const string& a, const string& b){
           return a.size()<b.size(); 
        });
        v[0][0] = toupper(v[0][0]);
        string ans = "";
        for(int i = 0; i<v.size(); i++) {
            ans+=v[i];
            if(i!=v.size()-1) ans+=' ';
        }
        return ans;
    }
    
    void getSplit(string& text) {
        stringstream ss(text);
        string curr;
        while(ss>>curr) {
            v.emplace_back(curr);
        }
    }
};