/*
Runtime: 58 ms, faster than 84.92% of C++ online submissions for Replace Words.
Memory Usage: 52.5 MB, less than 49.88% of C++ online submissions for Replace Words.
*/
class Solution {
private:
    struct TrieNode {
        bool isWord;
        vector<TrieNode*> children;
        TrieNode(): isWord(false), children(26,nullptr){};
    };
    
    TrieNode* root = new TrieNode();
    
    void insert(string& word) {
        TrieNode* tmp = root;
        for(char& c: word) {
            if(tmp->children[c - 'a'] == nullptr){
                tmp->children[c - 'a'] = new TrieNode();
            }
            tmp = tmp->children[c-'a'];
        }
        tmp->isWord = true;
    }
    
    string findPrefix(string& word){
        string res = "";
        TrieNode* node = root;
        for(char& c: word){
            if(node->children[c-'a']==nullptr) break;
            if(node->isWord) return res;
            res+=c;
            node = node->children[c-'a'];
        }
        return node->isWord?res:"";
    }
    
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        for(string& word:dictionary) {
            insert(word);
        }
        string ans = "";
        string tmp = "";
        for(char& c: sentence) {
            if(c!=' '){
                tmp += c;
            }else{
                string tmp2 = findPrefix(tmp);
                if( tmp2 != "" ) {
                    ans+=tmp2;
                }else{
                    ans+=tmp;
                }
                ans+=" ";
                tmp = "";
            }
        }
        ans += findPrefix(tmp)==""?tmp:findPrefix(tmp);
          
        return ans;
    }
};