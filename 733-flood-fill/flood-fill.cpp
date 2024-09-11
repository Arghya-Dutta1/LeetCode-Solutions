class Solution {
public:
    void dfs(vector<vector<int>>& image, int r, int c, int old, int color){
        if (r<0) return; 
        if (c<0) return;
        if (r>=image.size()) return;
        if (c>=image[0].size()) return;
        if (image[r][c]!=old) return;

        image[r][c]=color;

        dfs(image, r, c+1, old, color);
        dfs(image, r+1, c, old, color);
        dfs(image, r, c-1, old, color);
        dfs(image, r-1, c, old, color);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int old=image[sr][sc];
        if(old!=color)
            dfs(image, sr, sc, old, color);
        return image;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();