class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> ht(n+1);
        ht[0]=0;
        int h;
        for(int i=0;i<n;i++)
            ht[i+1]=ht[i]+gain[i];
        return *max_element(ht.begin(), ht.end());
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();