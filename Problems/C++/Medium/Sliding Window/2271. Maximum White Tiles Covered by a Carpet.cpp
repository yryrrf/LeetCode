/*
Runtime: 434 ms, faster than 75.09% of C++ online submissions for Maximum White Tiles Covered by a Carpet.
Memory Usage: 69.8 MB, less than 77.80% of C++ online submissions for Maximum White Tiles Covered by a Carpet.
*/
class Solution {
public:
    int maximumWhiteTiles(vector<vector<int>>& tiles, int carpetLen) {
        sort(tiles.begin(),tiles.end());
        int index = 0;
        int sum = 0;
        int ans = 0;
        for(int i = 0; i<tiles.size() && ans<carpetLen; ){
            if(tiles[i][1] - tiles[index][0] < carpetLen){
                sum+=getSum(tiles[i]);
                ans = max(ans,sum);
                i++;
            }else{
                int tmp = max(0,tiles[index][0] + carpetLen - tiles[i][0]);
                ans = max(ans,sum+tmp);
                sum-=getSum(tiles[index]);
                index++;
            }
        }
        return ans;
    }
    
    int getSum(vector<int>& array){
        return array[1]-array[0]+1;
    }
};

