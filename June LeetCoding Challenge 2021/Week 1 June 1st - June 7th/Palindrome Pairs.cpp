/*
Runtime: 212 ms, faster than 70.39% of C++ online submissions for Palindrome Pairs.
Memory Usage: 72.4 MB, less than 52.59% of C++ online submissions for Palindrome Pairs.
*/
class Solution {
public:
    bool check(string word, int beginNum, int endNum){
        while(beginNum<endNum){
            if(word[beginNum++]!=word[endNum--]) return false;
        }
        return true;
        
    }
    
    vector<vector<int>> palindromePairs(vector<string>& words) {
        unordered_map<string,int> dict;
        set<int> size_dict;
        vector<vector<int>> result;
        for(int i = 0;i<words.size();i++){
            dict[words[i]]=i;
            size_dict.insert(words[i].size());
        }

        string reverse_word;
        
        for(int i = 0;i<words.size();i++){
            reverse_word = words[i];
            reverse(reverse_word.begin(),reverse_word.end());
            if(dict.count(reverse_word) and dict[reverse_word] != i){
                result.push_back({i,dict[reverse_word]});
            }
            
            int length = reverse_word.size();
            
            for(auto wordSize = size_dict.begin() ; *wordSize!=length ; wordSize++){
                
                if(check(reverse_word, 0,(length - *wordSize - 1)) and dict.count(reverse_word.substr(length-*wordSize))){
                    result.push_back({i,dict[reverse_word.substr(length-*wordSize)]});
                }
                
             
                if(check(reverse_word, *wordSize,(length - 1)) and dict.count(reverse_word.substr(0, *wordSize))){       
                    result.push_back({dict[reverse_word.substr(0,*wordSize)],i});
                }
            }
        }
              return result;  
    }

};