/*
Runtime: 202 ms, faster than 16.88% of C++ online submissions for Decode the Slanted Ciphertext.
Memory Usage: 45.9 MB, less than 25.11% of C++ online submissions for Decode the Slanted Ciphertext.
*/
class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        string ans = "";
        vector<vector<char>> vec(rows,vector<char>(encodedText.size()/rows));
        int pt = 0;
        for(int i = 0; i<vec.size(); i++){
            for(int j = 0; j<vec[0].size(); j++){
                if(pt<encodedText.size()){
                    vec[i][j] = encodedText[pt];
                    pt++;
                }else{
                    vec[i][j] = ' ';
                }
            }
        }
        for(int i = 0; i<vec[0].size();i++){
            int tmp1 = 0, tmp2 = i;
            while(tmp1<vec.size() && tmp2<vec[0].size()){
                ans+=vec[tmp1][tmp2];
                tmp1++;
                tmp2++;
            }
        }
        while(ans.size()>0 && ans[ans.size()-1]==' ') ans.pop_back();
        return ans;
    }
};