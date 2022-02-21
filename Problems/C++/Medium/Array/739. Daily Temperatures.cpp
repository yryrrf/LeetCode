/*
Time Limit Exceeded
36 / 47 test cases passed.
*/
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result;
        for(int i = 0;i<temperatures.size();i++){
            int right = i;
            int count = 0;
            while(right<temperatures.size()){
                if(temperatures[right]>temperatures[i]){
                    break;
                }
                right++;
                count++;
            }
            if(right>=temperatures.size()) count = 0;
          
            result.push_back(count);
        }
        return result;
    }
};
/*
Runtime: 144 ms, faster than 56.52% of C++ online submissions for Daily Temperatures.
Memory Usage: 88.8 MB, less than 35.60% of C++ online submissions for Daily Temperatures.
*/
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        vector<int> result(temperatures.size(),0);
        for(int i = 0;i<temperatures.size();i++){
            while(!st.empty() and temperatures[i]>temperatures[st.top()]){
                result[st.top()]=i-st.top();
                st.pop();
            }
            st.push(i);
        }
        return result;
    }
};