/*
Runtime: 52 ms, faster than 15.13% of C++ online submissions for Push Dominoes.
Memory Usage: 18.9 MB, less than 5.66% of C++ online submissions for Push Dominoes.
*/
class Solution {
public:
    string pushDominoes(string dominoes) {
        vector<int> forces(dominoes.size(),0);
        //search right dominoe
        int force = 0;
        int size = dominoes.size();
        int n = size+1;
        for(int i = 0;i<size;i++){
            if(dominoes[i]=='R'){
                force = n;
            }else if(dominoes[i]=='L'){
                force = 0;
            }
            forces[i] += max(--force,0);
        }

        //search left dominoe
        force = 0;
        for(int i = size-1;i>=0;i--){
            if(dominoes[i]=='L'){
                force = n;
            }else if(dominoes[i]=='R'){
                force = 0;
            }
            forces[i] -= max(--force,0);
        }

        string result="";
        
        for(int force:forces){
            if(force==0){
                result+='.';
            }else if(force>0){
                result+="R";
            }else{
                result+="L";
            }
        }
        
        return result;
        
    }
};