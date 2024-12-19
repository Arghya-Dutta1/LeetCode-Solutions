class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int ans=0, cs=0;
        vector<int> p(arr.size());
        p[0]=0;
        for(int i=1;i<arr.size();i++) p[i]=p[i-1]+i;
        for(int i=0;i<arr.size();i++){
            cs+=arr[i];
            if(cs==p[i]) ans++;
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