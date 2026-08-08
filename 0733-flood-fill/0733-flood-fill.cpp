class Solution {

    void change(vector<vector<int>>& image, int sr, int sc, int color, int original)
    {
        if(sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size())
            return;

        if(image[sr][sc] == original)
        {
            image[sr][sc] = color;
            
            change(image, sr+1, sc, color, original);
            change(image, sr-1, sc, color, original);
            change(image, sr, sc+1, color, original);
            change(image, sr, sc-1, color, original);
        }
        else{
            return;
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int original = image[sr][sc];
        if(original == color)
            return image; 
        
        change(image, sr, sc, color, original);
        return image;

    }
};