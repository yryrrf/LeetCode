/*
Runtime: 27 ms, faster than 74.09% of C++ online submissions for Sum of Subarray Ranges.
Memory Usage: 11.7 MB, less than 14.78% of C++ online submissions for Sum of Subarray Ranges.
*/
class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        vector<int> minL(n), minR(n), maxL(n), maxR(n);
        stack<int> s1,s2,s3,s4;
        s1.push(-1);
        s2.push(n);
        s3.push(-1);
        s4.push(n);
        for(int i = 0; i<n; i++) {
            int j = n-1-i;
            while(s1.top()!=-1 && nums[s1.top()]>=nums[i]){
                s1.pop();
            }
            minL[i] = s1.top();
            s1.push(i);
            
            while(s2.top()!=n && nums[s2.top()]>nums[j]){
                s2.pop();
            }
            minR[j]=s2.top();
            s2.push(j);
            
            while(s3.top()!=-1 && nums[s3.top()]<=nums[i]){
                s3.pop();
            }
            maxL[i] = s3.top();
            s3.push(i);
            
            while(s4.top()!=n && nums[s4.top()]<nums[j]) {
                s4.pop();
            }
            maxR[j] = s4.top();
            s4.push(j);
        }

        long long ans = 0LL;
        for(int i = 0 ; i<n; i++) {
            ans+=static_cast<long long>((maxR[i] - i)*1LL*(i-maxL[i])*nums[i]);
            ans-=static_cast<long long>((minR[i]-i)*1LL*(i-minL[i])*nums[i]);
        }
        return ans;
    }
};
