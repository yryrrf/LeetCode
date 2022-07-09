/*
Runtime: 57 ms, faster than 25.62% of C++ online submissions for Maximize the Confusion of an Exam.
Memory Usage: 10 MB, less than 93.80% of C++ online submissions for Maximize the Confusion of an Exam.
*/
class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        return max(search(answerKey,k,'T'),search(answerKey,k,'F'));
    }
    
    int search(string& a, int& k, char c) {
        int tmp = 0;
        int ans = 0;
        int left = 0;
        for(int i = 0; i<a.size(); i++) {
            if(a[i]!=c) {
                tmp++;
            }
            while(tmp>k) {
                if(a[left]!=c) tmp--;
                left++;
            }
            ans = max(ans,i-left+1);
        }
        return ans;
    }
};