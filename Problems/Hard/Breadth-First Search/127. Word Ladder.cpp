/*
Runtime: 96 ms, faster than 80.18% of C++ online submissions for Word Ladder.
Memory Usage: 38.4 MB, less than 9.70% of C++ online submissions for Word Ladder.
*/
class Solution {
public:
    unordered_map<string,int> wordId;
    vector<vector<int>> link;
    int node = 0;
    
    void add_word_id(string& word){
        if(!wordId.count(word)){
            wordId[word] = node++;
            link.emplace_back();
        }
    }
    
    
    void add_link(string& word){
        add_word_id(word);
        int id1 = wordId[word];
        for(char& c : word){
            char tmp = c;
            c = '*';
            add_word_id(word);
            int id2 = wordId[word];
            link[id1].emplace_back(id2);
            link[id2].emplace_back(id1);
            c = tmp;
        }
    }
    
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        for(string word : wordList){
            add_link(word);
        }
        
        add_link(beginWord);
        
        if(!wordId.count(endWord)) return 0;
        
        vector<int> dist(node,INT_MAX);
        dist[wordId[beginWord]] = 0;
        
        queue<int> que;
        que.push(wordId[beginWord]);
        
        int endId = wordId[endWord];
        
        while(!que.empty()){
            int x = que.front();
            que.pop();
            
            if(x == endId) return dist[endId]/2+1;
            
            for(int& num : link[x]){
                if(dist[num]==INT_MAX){
                    dist[num] = dist[x]+1;
                    que.push(num);
                }  
            }
            
        }
        
        return 0;
    }
};