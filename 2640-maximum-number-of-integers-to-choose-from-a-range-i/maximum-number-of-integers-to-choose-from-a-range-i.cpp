class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int> st(banned.begin(), banned.end());
        int s=0, c=0;
        for(int i=1;i<=n;i++){
            if(st.count(i)) continue;

            if(s+i>maxSum) break;
            s+=i;
            c++;
        }
        return c;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();