/*
Runtime: 160 ms
Memory Usage: 47 MB
You are here!
Your runtime beats 9.33 % of cpp submissions.
You are here!
Your memory usage beats 8.16 % of cpp submissions.
*/
class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        long maxNum=0; 
        long sum = 0;
        priority_queue <int,vector<int>,greater<int> > speedData;
        vector <vector <int> > array;
        for(int i = 0;i<efficiency.size();i++){
            array.push_back({efficiency[i],speed[i]});
        }  
        sort(array.rbegin(),array.rend());     
        for(int i = 0; i<efficiency.size();i++){        
            sum+=array[i][1];
            speedData.push(array[i][1]);
            if(--k<0){             
                sum-=speedData.top ();
                speedData.pop();              
            }
            maxNum = max(maxNum,sum*array[i][0]);    
        }
        return maxNum % (int) (1e9 + 7);
    }
};