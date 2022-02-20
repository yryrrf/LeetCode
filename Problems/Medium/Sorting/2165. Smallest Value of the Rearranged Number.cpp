/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Smallest Value of the Rearranged Number.
Memory Usage: 6 MB, less than 65.53% of C++ online submissions for Smallest Value of the Rearranged Number.
*/
class Solution {
public:
    long long smallestNumber(long long num) {
        if(num==0) return 0;
        vector<int> vec;
        bool positive = true;
        if(num<0){
            positive = false;
        }
        while(num!=0){
            vec.push_back(abs(num%10));
            num/=10;
        }
        sort(vec.begin(), vec.end());
        if(!positive) reverse(vec.begin(), vec.end());
        else{
            if(vec[0]==0) {
                for(int i = 0; i<vec.size(); i++){
                    if(vec[i]!=0) {
                        swap(vec[0], vec[i]);
                        break;
                    }
                }
            }
        }
        long long ans=0;
        for(int i = 0; i<vec.size(); i++){
            ans*=10;
            ans+=vec[i];
        }
        return positive?ans:-ans;
    }
};