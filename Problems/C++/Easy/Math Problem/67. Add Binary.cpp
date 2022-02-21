/*
Runtime: 4 ms, faster than 66.37% of C++ online submissions for Add Binary.
Memory Usage: 6.2 MB, less than 94.70% of C++ online submissions for Add Binary.
*/
class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int length = max(a.size(),b.size());
        int sum = 0;
        string result;
        for(int i = 0;i<length;i++){
            sum+=i<a.size()?(a[i]=='1'):0;
            sum+=i<b.size()?(b[i]=='1'):0;
            result.push_back((sum%2)?'1':'0');
            sum/=2;
        }
        if(sum) result.push_back('1');
        reverse(result.begin(),result.end());
        return result;
    }
};

