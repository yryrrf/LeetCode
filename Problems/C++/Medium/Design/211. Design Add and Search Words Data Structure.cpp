/*
Runtime: 1534 ms, faster than 47.68% of C++ online submissions for Design Add and Search Words Data Structure.
Memory Usage: 623.4 MB, less than 16.56% of C++ online submissions for Design Add and Search Words Data Structure.
*/
struct TrieNode{
    vector<TrieNode*> child;
    bool isEnd;
    TrieNode(){
        this->child = vector<TrieNode *>(26,nullptr);
        this->isEnd = false;
    }
};

void insert(TrieNode* node, string& word){
    TrieNode* tmp = node;
    for(char c:word){
        if(tmp->child[c-'a'] == nullptr){
            tmp->child[c-'a'] = new TrieNode();
        }
        tmp = tmp->child[c-'a'];
    }
    tmp->isEnd = true;
}

class WordDictionary {
public:
    WordDictionary() {
        root = new TrieNode();
    }
    
    void addWord(string word) {
        insert(root,word);
    }
    
    bool search(string word) {
        return dfs(word, 0, root);
    }
    
    bool dfs(const string& word, int index, TrieNode* node){
        if(index == word.size()) return node->isEnd;
        
        if(word[index]=='.'){
            for(int i = 0; i<26; i++){
                if(node->child[i]!=nullptr && dfs(word,index+1,node->child[i])){
                    return true;
                }
            }
        }else{
            if(node->child[word[index]-'a']!=nullptr && dfs(word,index+1,node->child[word[index]-'a'])){
                    return true;
            }
        }
        return false;
    }
    
private:
    TrieNode* root;
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */