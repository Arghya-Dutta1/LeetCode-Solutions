class Solution {
public:
    const int MOD=1e9+7;

    long long mpow(long long base, long long exp){
        long long ans=1;
        base%=MOD;
        while(exp>0){
            if(exp%2==1)
                ans=(ans*base)%MOD;
            base=(base*base)%MOD;
            exp/=2;
        }        
        return ans;
    }

    int countGoodNumbers(long long n) {
        long long ev=(n+1)/2;
        long long od=n/2;
        return (mpow(5, ev)*mpow(4, od))%MOD;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();