class Solution {
public:
    char findKthBit(int n, int k) {
        string s="0";
        for(int i=1;i<n;i++){
            string s1=s;
            reverse(s1.begin(), s1.end());
            for(int j=0;j<s1.size();j++)
                if(s1[j]=='1')
                    s1[j]='0';
                else
                    s1[j]='1';
            s+="1"+s1;
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