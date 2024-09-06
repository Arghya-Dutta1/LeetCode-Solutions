class SubrectangleQueries {
public:
    vector<vector<int>> rect;
    int r,c;
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        r=rectangle.size();
        c=rectangle[0].size();
        rect.resize(r, vector<int>(c));
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                rect[i][j]=rectangle[i][j];
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        for(int i=row1;i<=row2;i++)
            for(int j=col1;j<=col2;j++)
                rect[i][j]=newValue;
    }
    
    int getValue(int row, int col) {
        return rect[row][col];
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();
/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */