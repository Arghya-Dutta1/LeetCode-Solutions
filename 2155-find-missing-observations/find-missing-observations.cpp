class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m=rolls.size();
        int s=accumulate(rolls.begin(), rolls.end(), 0);
        int ns=mean*(n+m)-s;
        if(ns<0 || ns<n) return {};
        vector<int> ans(n, 1);
        ns-=n;
        for(int i=0;i<n && ns!=0;i++){
            if(ns>=5){
                ans[i]+=5;
                ns-=5;
            }
            else{
                ans[i]+=ns;
                ns=0;
            }
        }
        if(ns!=0) return {};
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();