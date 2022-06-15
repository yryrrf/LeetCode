/*
Runtime: 42 ms, faster than 95.61% of C++ online submissions for Longest Word in Dictionary.
Memory Usage: 22 MB, less than 68.07% of C++ online submissions for Longest Word in Dictionary.
*/
class Solution {
private:
    struct TrieNode{
        bool isWord;
        vector<TrieNode*> children;
        TrieNode(): isWord(false),children(26,nullptr){};
    };
    TrieNode* root = new TrieNode();
    
    bool search(string& word) {
        TrieNode* node = root;
        for(int i = 0; i<word.size()-1; i++){
            if(node->children[word[i]-'a'] == nullptr) return false;
            node = node->children[word[i]-'a'];
        }
        if(node->children[word[word.size()-1]-'a'] == nullptr) {
            node->children[word[word.size()-1]-'a'] = new TrieNode();
            node = node->children[word[word.size()-1]-'a'];
            node->isWord = true;
        }
        return true;
    }
    
public:
    string longestWord(vector<string>& words) {
        sort(words.begin(), words.end(), [](string& a, string& b){ return a.size()<b.size(); } );
        string ans = "";
        for(string& word:words) {
            
            if(search(word) && (word.size() > ans.size() || (word.size() == ans.size() && word < ans))) ans = word;
        }
        return ans;
    }
};