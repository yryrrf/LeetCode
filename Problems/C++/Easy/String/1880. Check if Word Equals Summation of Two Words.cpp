/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Check if Word Equals Summation of Two Words.
Memory Usage: 5.9 MB, less than 56.51% of C++ online submissions for Check if Word Equals Summation of Two Words.
*/
class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        return stringToInt(targetWord) == stringToInt(firstWord) +stringToInt(secondWord);
    }
    
    int stringToInt(string word){
        int num = 0;
        for(int i = 0; i<word.size();i++){
            num = num*10 + word[i]-'a';
        }
        return num;
    }  
};