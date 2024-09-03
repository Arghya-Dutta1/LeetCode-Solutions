class Solution {
public:
    int getLucky(string st, int k) {
        string s="";
        for(auto i:st)
            s=s+to_string(i-'a'+1);
        long long sum=0;
        while(k--){
            long long s1=0;
            for(auto i:s)
                s1+=i-'0';
            sum=s1;
            s=to_string(s1);
        }
        return (int)sum;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();