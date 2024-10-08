class Solution {
public:
    int minSwaps(string s) {
        int ans=0;
        for(auto i:s)
            if(i=='[') ans++;
            else if(ans>0) ans--;
        return (ans+1)/2;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();