/*
Runtime: 8 ms, faster than 69.80% of C++ online submissions for Reverse Vowels of a String.
Memory Usage: 7.7 MB, less than 65.34% of C++ online submissions for Reverse Vowels of a String.
*/
class Solution {
public:
    bool isVowels(char word){
        if(word=='a' or word=='e' or word=='i' or word=='o' or word=='u' or word=='A' or word=='E' or word=='I' or word=='O' or word=='U'){
            return true;
        }
        return false;
    }
    
    string reverseVowels(string s) {
        int left = 0, right = s.size()-1;     
        while(left<right){
            char leftText = s[left];
            char rightText = s[right];
            if(isVowels(leftText) && isVowels(rightText)){
                s[left] = rightText;
                s[right] = leftText;
                left++;
                right--;
            }else if(isVowels(leftText)){
                right--;
            }else{
                left++;
            }
        }
        
        return s;
    }
};