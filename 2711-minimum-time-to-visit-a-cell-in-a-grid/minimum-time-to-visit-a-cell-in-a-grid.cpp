class Solution {
public:
    int minimumTime(vector<vector<int>>& grid) {
        if(grid[0][1]>1&&grid[1][0]>1)
            return -1;

        int rows=grid.size(),cols=grid[0].size();
        int distance[rows][cols];
        memset(distance,0x3f,sizeof distance);
        distance[0][0]=0;

        priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,      greater<tuple<int,int,int>>>pq;
        pq.emplace(0,0,0);
        int directionOffsets[5]={-1,0,1,0,-1};
        
        while(!pq.empty()){
            auto[currentTime,row,col]=pq.top();
            pq.pop();
            if(row==rows-1&&col==cols-1) return currentTime;
            for(int k=0;k<4;++k){
                int newX=row+directionOffsets[k],newY=col+directionOffsets[k+1];
                if(newX>=0&&newX<rows&&newY>=0&&newY<cols){
                    int newTime=currentTime+1;
                    if(newTime<grid[newX][newY])
                        newTime=grid[newX][newY]+(grid[newX][newY]-newTime)%2;
                    if(newTime<distance[newX][newY]){
                        distance[newX][newY]=newTime;
                        pq.emplace(newTime,newX,newY);
                    }
                }
            }
        }
        return -1;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();