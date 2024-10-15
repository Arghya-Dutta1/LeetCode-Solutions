class Solution {
public:
    long long minimumSteps(string s) {
        long long c=0, ans=0;
        for(auto i:s)
            if(i=='1')
                c++;
            else
                ans+=c;
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();