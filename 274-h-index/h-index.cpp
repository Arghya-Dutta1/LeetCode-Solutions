class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        ranges::sort(citations);
        for(int i=0;i<n;i++)
            if(citations[i]>=n-i)
                return n-i;
        return 0;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();