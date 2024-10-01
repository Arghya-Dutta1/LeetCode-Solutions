class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> f(k);
        for(auto i:arr)
            f[((i%k)+k)%k]++;

        for(int i=1;i<k;i++)
            if(f[i]!=f[k-i])
                return false;
        return f[0]%2==0;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();