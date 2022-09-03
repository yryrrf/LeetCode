/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Encode and Decode TinyURL.
Memory Usage: 7 MB, less than 42.77% of C++ online submissions for Encode and Decode TinyURL.
*/
class Solution {
public:
    unordered_map<string,string> um;
    int index = 0;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        um[to_string(index)] = longUrl;
        return to_string(index++);
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return um[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));