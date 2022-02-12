/*
Runtime: 2 ms, faster than 30.02% of C++ online submissions for Maximum Swap.
Memory Usage: 5.9 MB, less than 88.56% of C++ online submissions for Maximum Swap.
*/
class Solution {
public:
    int maximumSwap(int num) {
        vector<int> vec;
        int tmp = num;
        string numStr = to_string(num);
        while(tmp!=0){
            vec.push_back(tmp%10);
            tmp/=10;
        }
        sort(vec.rbegin(),vec.rend());
        for(int i = 0; i<numStr.size(); i++){
            if(numStr[i] != vec[i]+'0'){      
                for(int j = numStr.size()-1; j>=0; j--){
                    if(numStr[j]==vec[i]+'0'){
                        numStr[j] = numStr[i];
                        break;
                    }
                }
                numStr[i] = vec[i] +'0';
                break;
            }
        }
        int ans = 0;
        for(int i=0; i<numStr.size(); i++){  
            ans*=10;
            ans+=numStr[i]-'0'; 
        }
        return ans;
    }
};