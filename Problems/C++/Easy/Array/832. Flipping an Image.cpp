/*
Runtime: 7 ms, faster than 59.13% of C++ online submissions for Flipping an Image.
Memory Usage: 8.8 MB, less than 41.79% of C++ online submissions for Flipping an Image.
*/
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i = 0; i<image.size(); i++){
            int isEven = image.size()%2;
            for(int j = 0; j<image.size()/2+isEven; j++){
                int tmp = image[i][j];
                image[i][j] = (image[i][image.size()-1-j]^1);
                image[i][image.size()-1-j] = (tmp^1);
            }
        }
        return image;
    }
};