/*
Runtime: 426 ms, faster than 25.00% of C++ online submissions for Sender With Largest Word Count.
Memory Usage: 77.2 MB, less than 50.00% of C++ online submissions for Sender With Largest Word Count.
*/
class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        map<string,int> mp;
        int max = 0;
        string sender = "";
        for(int i=0; i<messages.size(); i++){
            int total = mp[senders[i]]+=wordCounter(messages[i]);

        }
        for(auto it:mp){
            if(it.second>max || (it.second==max && it.first>sender)) {
                max = it.second;
                sender = it.first;
            }
        }
        return sender;
        
    }
    bool compare(string s1, string s2){
        return s1>s2;
    }
    
    int wordCounter(string word){
        int cnt = 0;
        bool tmp = true;
        for(int i = 0; i<word.size(); i++){
            if(tmp && word[i]!=' '){
                cnt++;
                tmp = false;
            }
            if(word[i] == ' ') tmp = true;
        }
        return cnt;
    }
};