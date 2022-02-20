/*
Runtime: 4 ms, faster than 51.49% of C++ online submissions for Capitalize the Title.
Memory Usage: 6.2 MB, less than 78.99% of C++ online submissions for Capitalize the Title.
*/
class Solution {
public:
    void allSmallLetter(string& word){
        for(int i = 0; i<word.size(); i++){
            if(word[i]>='A' && word[i]<='Z'){
                word[i] += 'a' - 'A';
            }
        }
    }
    
    void firstCapLetter(string& word){
        allSmallLetter(word);
        if(word[0]>='a' && word[0]<='z'){
            word[0] -= 'a' - 'A';
        }
    }
    
    string capitalizeTitle(string title) {
        int firstLetter= true;
        string ans= "";
        string tmp = "";
        for(int i = 0; i<title.size(); i++){
            if(title[i] == ' ' || i==title.size()-1){
                if(i==title.size()-1) tmp+=title[i];
                if(tmp.size()<=2){
                    allSmallLetter(tmp);
                }else{
                    firstCapLetter(tmp);
                }
                ans+=tmp;
                if(i!=title.size()-1) ans+=' ';
                tmp = "";
            }else{
                tmp+=title[i];
            }
        }
        return ans;
    }
};