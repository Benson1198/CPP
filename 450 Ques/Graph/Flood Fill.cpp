class Solution {
public:
    void DFSutil(vector<vector<int>>& image,int i,int j,int newColor,int oldColor){
        if(i < 0 || i >= image.size() || j<0 || j >= image[0].size()){
            return;
        }

        if(image[i][j] != oldColor){
            return;
        }

        if(image[i][j] == oldColor){
            image[i][j] = newColor;
        }

        
        DFSutil(image,i+1,j,newColor,oldColor);
        DFSutil(image,i-1,j,newColor,oldColor);
        DFSutil(image,i,j+1,newColor,oldColor);
        DFSutil(image,i,j-1,newColor,oldColor);

    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int oldColor = image[sr][sc];

        if (oldColor != newColor){
            DFSutil(image,sr,sc,newColor,oldColor);
        }
        return image;
    }
};