class Solution {
public:
    int countSubstrings(string s) {
        int c=0, n=s.size();
        for(int i=0;i<n*2-1;i++){
            int l=i/2, r=(i+1)/2;
            while(l>=0 && r<n && s[l]==s[r]){
                c++;
                l--;
                r++;
            }
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