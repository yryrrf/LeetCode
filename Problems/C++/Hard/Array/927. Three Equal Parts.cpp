/*
Runtime: 40 ms, faster than 61.59% of C++ online submissions for Three Equal Parts.
Memory Usage: 39 MB, less than 54.88% of C++ online submissions for Three Equal Parts.
*/
class Solution {
public:
    vector<int> threeEqualParts(vector<int>& arr) {
        int total = 0;
        for(int num:arr){
            total+=(num==1);
        }
        
        if(total%3!=0 or arr.size()<3) return {{-1,-1}};
        if(total == 0) return {{0, (int)arr.size()-1}};
        
        int a1,a2,b1,b2,c1,c2;
        int count = 0;
        int limit  = total/3;
        
        for(int i = 0;i<arr.size();i++){
            if(arr[i]==1){
                count++;
                if(count == 1) a1= i;
                if(count == limit) a2=i;
                if(count == limit+1) b1 = i;
                if(count == 2*limit) b2 = i;
                if(count == 2*limit +1) c1 = i;
                if(count == 3*limit) c2 = i;
            }
        }
        
        if(a2-a1!=b2-b1 or a2-a1!=c2-c1){
            return {{-1,-1}};
        }
        
        int len = a2-a1;
        
        for(int i =0;i<=len;i++){
            if(arr[a1+i]!=arr[b1+i] or arr[a1+i]!=arr[c1+i]) return {{-1,-1}};
        }
        
        int zeroNum = arr.size()-1-c2;
        
        if(b1-a2-1<zeroNum or c1-b2-1<zeroNum) return {{-1,-1}};
        
        return {{a2+zeroNum,b2+1+zeroNum}};
    }
};