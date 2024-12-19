class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int ans=0, lmx=INT_MIN;
        for(int i=0;i<arr.size();i++){
            lmx=max(lmx, arr[i]);
            if(lmx==i) ans++;
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