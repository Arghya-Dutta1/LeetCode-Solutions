class Solution {
public:
    char kthCharacter(int k) {
        string s="a";
        while(s.length()<k){
            string r=s;
            for(int i=0;i<r.length();i++)
                r[i]++;
            s+=r;
        }
        return s[k-1];
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();