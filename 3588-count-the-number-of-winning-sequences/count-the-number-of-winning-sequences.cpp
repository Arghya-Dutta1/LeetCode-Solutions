class Solution {
public:
    long long M=1000000007;
    int countWinningSequences(string s) {
        int n=s.size();
        vector<array<long long,3>> a(3020);
        if(s[0]=='F'){
            a[1004][2]=1;
            a[1005][0]=1;
            a[1006][1]=1;
        }
        else if(s[0]=='E'){
            a[1004][1]=1;
            a[1005][2]=1;
            a[1006][0]=1;
        }
        else{
            a[1004][0]=1;
            a[1005][1]=1;
            a[1006][2]=1;
        }
        for(int i=1;i<n;++i){
            vector<array<long long,3>> b(3020);
            for(int j=1005-i-1;j<=1005+i+1;++j){
                if(s[i]=='F'){
                    b[j][0]=a[j][1]+a[j][2];
                    b[j][1]=a[j-1][0]+a[j-1][2];
                    b[j][2]=a[j+1][0]+a[j+1][1];
                }
                else if(s[i]=='E'){
                    b[j][0]=a[j-1][1]+a[j-1][2];
                    b[j][1]=a[j+1][0]+a[j+1][2];
                    b[j][2]=a[j][0]+a[j][1];
                }
                else{
                    b[j][0]=a[j+1][1]+a[j+1][2];
                    b[j][1]=a[j][0]+a[j][2];
                    b[j][2]=a[j-1][0]+a[j-1][1];
                }
                b[j][0]%=M;
                b[j][1]%=M;
                b[j][2]%=M;
            }
            swap(a,b);
        }
        long long res=0;
        for(int i=1;i<=n;++i){
            res+=a[1005+i][0]+a[1005+i][1]+a[1005+i][2];
            res%=M;
        }
        return res;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();