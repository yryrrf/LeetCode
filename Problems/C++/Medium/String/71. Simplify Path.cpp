/*
Runtime: 8 ms, faster than 54.60% of C++ online submissions for Simplify Path.
Memory Usage: 9.6 MB, less than 43.15% of C++ online submissions for Simplify Path.
*/
class Solution {
public:
    string simplifyPath(string path) {
        stringstream ss(path);
        string tmp,result;
        vector<string> vec;
        while(getline(ss,tmp,'/')){
            if(tmp == "" or tmp==".") continue;
            if(tmp!="..") vec.push_back(tmp);
            else if(!vec.empty()) vec.pop_back();
        }
        for(string s : vec) result += "/" + s;
        return vec.empty() ? "/" : result;
    }
};