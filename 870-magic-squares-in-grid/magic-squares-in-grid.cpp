class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        if(r<3 || c<3) return 0;

        auto check=[&](int i, int j){
            if(i+3>r || j+3>c) return 0;
            vector<int> rs(3);
            vector<int> cs(3);
            vector<int> mp(16, 0);
            int d1=0, d2=0;
            for(int x=i;x<i+3;x++)
                for(int y=j;y<j+3;y++){
                    int v=grid[x][y];
                    if(v<1 || v>9 || ++mp[v] > 1) return 0;
                    rs[x-i]+=v;
                    cs[y-j]+=v;
                    if(x-i==y-j) d1+=v;
                    if(x-i+y-j==2) d2+=v;
                }
            if(d1!=d2) return 0;
            for(int x=0;x<3;x++)
                if(rs[x]!=d1 || cs[x]!=d1) return 0;
            return 1;
        };

        int count=0;
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                count+=check(i,j);
        return count;
    }
};