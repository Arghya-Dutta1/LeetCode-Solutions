class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int c=0, ans=INT_MAX;
        for(int i=0;i<k;i++)
            if(blocks[i]=='W')
                c++;
        ans=min(ans, c);
        for(int j=1,i=k;i<blocks.size();i++,j++){
            if(blocks[j-1]=='W') c--;
            if(blocks[i]=='W') c++;
            ans=min(ans, c);
        }
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();