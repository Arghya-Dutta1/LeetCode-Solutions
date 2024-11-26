class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int> in(n, 0);
        for(auto i:edges){
            int u=i[0], v=i[1];
            in[v]++;
        }

        int champ=-1, c=0;
        for(int i=0;i<n;i++){
            if(in[i]==0){
                champ=i;
                c++;
                if(c>1) return -1;
            }
        }
        return champ;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();