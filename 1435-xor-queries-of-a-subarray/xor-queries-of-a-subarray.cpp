class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        vector<int> pre(n), ans;
        pre[0]=arr[0];
        for(int i=1;i<n;i++) pre[i]=pre[i-1]^arr[i];
        for(auto i:queries)
            ans.push_back(pre[i[1]]^(i[0]==0?0:pre[i[0]-1]));
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();