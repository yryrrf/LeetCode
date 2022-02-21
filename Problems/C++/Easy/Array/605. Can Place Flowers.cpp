/*
Runtime: 21 ms, faster than 66.46% of C++ online submissions for Can Place Flowers.
Memory Usage: 20.3 MB, less than 70.79% of C++ online submissions for Can Place Flowers.
*/
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(flowerbed.size()==1) return flowerbed[0]==0? (n-1)<=0:n<=0;
        if(flowerbed[0]==0 && flowerbed[1]==0) {
            flowerbed[0]=1;
            n--;
        }
        for(int i = 1; i<flowerbed.size()-1;i++){
            if(flowerbed[i-1]==0 && flowerbed[i+1]==0 && flowerbed[i]==0){
                flowerbed[i] = 1;
                n--;
            }
        }
        if(flowerbed[flowerbed.size()-2]==0 && flowerbed[flowerbed.size()-1]==0) n--;
        return n<=0;
    }
};