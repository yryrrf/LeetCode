/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Goal Parser Interpretation.
Memory Usage: 6.2 MB, less than 38.34% of C++ online submissions for Goal Parser Interpretation.
*/
class Solution {
public:
    string interpret(string command) {
        string result;
        string word;
        for(char c : command){
            word +=c;
            if(word=="()"){
                result+="o";            
                word = "";
            }else if (word=="(al)"){
                result+="al";
                word = "";
            }else if(word=="G"){
                result+="G";
                word = "";
            }
        }
        return result;
    }
};