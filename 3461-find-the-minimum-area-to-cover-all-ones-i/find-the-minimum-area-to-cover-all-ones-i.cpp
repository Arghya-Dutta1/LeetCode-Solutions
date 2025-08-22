class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int r=grid.size();
        if(r==0)
            return 0;
        int c=grid[0].size();

        int mr=INT_MAX, mxr=INT_MIN, mc=INT_MAX, mxc=INT_MIN;

        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                if(grid[i][j]==1){
                    mxr=max(mxr, i);
                    mr=min(mr, i);
                    mxc=max(mxc, j);
                    mc=min(mc, j);
                }
        
        if(mr==INT_MAX)
            return 0;
        
        int h=mxr-mr+1;
        int w=mxc-mc+1;
        return w*h;        
    }
};